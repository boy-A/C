#include<iostream>
#include"workerManager.h"
#include"employee.h"
#include"Manager.h"
#include"Worker.h"
#include"Boss.h"


//构造函数
WorkerManager::WorkerManager()
{
	////初始化属性
	//this->m_EmpNum = 0;
	//this->m_EmpArray = NULL;

	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	//1. 文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;   //测试不存在
		this->m_EmpNum = 0;		//初始化人数
		this->m_FileIsEmpty = true;			//初始化文件为空的标志
		this->m_EmpArray = NULL;		//初始化数组
		ifs.close();		//关闭文件
		return;

	}
	// 2. 文件存在且数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	
	}

	//3. 文件存在，并且记录数据个数
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//将文件中的数据，存到数组中
	this->init_Emp();


	//测试代码
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "职工编号： " << this->m_EmpArray[i]->m_Id<<"\t"
	//		<< "姓名： " << this->m_EmpArray[i]->m_Name << "\t"
	//		<< "部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
	//}



}

//析构函数
WorkerManager::~WorkerManager()
{
	//堆区数据使用后要手动释放
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}

	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//显示列表
void WorkerManager::showMenu()
{
	cout << "***********************************************" << endl;
	cout << "*************欢迎使用职工管理系统**************" << endl;
	cout << "*************** 0. 退出管理系统 ***************" << endl;
	cout << "*************** 1. 添加职工信息 ***************" << endl;
	cout << "*************** 2. 显示职工信息 ***************" << endl;
	cout << "*************** 3. 删除职工信息 ***************" << endl;
	cout << "*************** 4. 修改职工信息 ***************" << endl;
	cout << "*************** 5. 查找职工信息 ***************" << endl;
	cout << "*************** 6. 按照编号排序 ***************" << endl;
	cout << "*************** 7. 清空所有文档 ***************" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

//退出程序
void WorkerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加的职工数量： " << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//添加
		//计算添加新空间大小
		int newsize = this->m_EmpNum + addnum;  //新空间人数 = 原来记录人数 + 新增人数

		//开辟新空间
		Worker ** newSpace = new Worker* [newsize];

		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray!= NULL)
		{
			for (int  i = 0; i < this->m_EmpNum ; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		
		}

		//批量添加数据
		for(int i=0;i<addnum;i++)\
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名： " << endl;
			cin >> name;
			cout << "请选择该职工岗位：" << endl;
			cout << "1. 普通职工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 总裁" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			} 
	
			//将创建的职工指针，保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有的空间
		delete[] this->m_EmpArray;

		//更新新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newsize;

		//成功添加后 保存到文件中
		this->Save();

		//更新文件是否为空的标志为false
		this->m_FileIsEmpty = false;			

		//提示添加成功
		cout << "成功添加" << addnum << "名新职工!" << endl;

	}
	else
	{
		cout << "数据有误！" << endl;
	}

	system("pause");
	system("cls");
}

//保存添加的职工数据
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//统计员工数量
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	 
	int id;
	string name;
	int did;

	int num = 0;  //统计人数的变量

	while (ifs>>id&&ifs>>name&&ifs>>did)
	{
		num++;

	}
	ifs.close();
	return num;

}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;
	 
	int index = 0;
	while ( ifs >> id && ifs >> name && ifs >> did )
	{
		Worker* worker = NULL;
		//根据不同的部门id创建不同对象
		if (did == 1)
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)
		{
			worker = new Manager(id, name, did);
		}
		else 
		{
			worker = new Boss(id, name, did);
		}
		//存放在数组中
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

//展示职工信息
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用接口
			this->m_EmpArray[i]->showInfo();
		
		}
	}
	system("pause");
	system("cls");
}

//按照职工编号判断职工是否存在，如果存在返回职工在数组中的位置，不存在返回-1
int  WorkerManager::IsExist(int id)
{
	int index = -1;  //返回 -1

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	
	}
	return index;
}

//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入要删除的职工编号：" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//数据前移，覆盖掉要删除的数据
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			//更新数组中职工人数
			this->m_EmpNum--;   
			//数据同步更新到文件中
			this->Save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，没有找到记录！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入需要修改的职工编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找到编号为ret的职工
			delete this->m_EmpArray[ret];  //原记录删除
			//重新给职工赋值
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查找到" << id << "号职工，请输入新的职工号：" << endl;
			cin >> newId;
			cout << "请输入新的姓名：" << endl;
			cin >> newName;
			cout << "请输入新的岗位：" << endl;
			cout << "1. 普通职工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 总裁" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			//更改数据  到数组中
			this->m_EmpArray[ret] = worker;
			cout << "修改成功" << this->m_EmpArray[ret]->m_Id << endl;
			this->Save();

		}
		else
		{
			cout << "修改失败，没有找到该职员！" << endl;
		}
		system("pause");
		system("cls");
	}
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;

	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1. 按职工编号查找" << endl;
		cout << "2. 按姓名查找" << endl;
		int select = 0;
		cin >> select;
		//按职工编号查找
		if (select == 1)  
		{
			int id;
			cout << "请输入要查找的职工编号：" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "没有找到该职工！" << endl;
			}
		}
		//按姓名查找
		else if(select == 2 ) 
		{
			string name;
			cout << "请输入要查找的职工姓名：" << endl;
			cin >> name;

			bool flag = false;   //查找到的标志
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功！该职工的信息如下：" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}



			}
			if (flag == false)
			{
				cout << "查找失败，没有找到该职工" << endl;
			}


		}
		else
		{
			cout << "输入选项有误！" << endl;
		}


	}
	system("pause");
	system("cls");
}

//排序职工
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1. 按职工编号进行升序" << endl;
		cout << "2. 按职工编号进行降序" << endl;
		int select;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			//升序
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				//升序
				if (select == 1)
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;

					}
				}
				//降序
				else
				{
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
					{
						minOrMax = j;

					}
				}
			}

			if (i != minOrMax)
			{
				Worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "排序成功，排序后的结果是：" << endl;
		this->Save();
		this->Show_Emp();


	}
}

//清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1. 确认" << endl;
	cout << "2. 返回" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		//打开模式  ios::trunc 如果存在 删除文件并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;

	}
	system("pause");
	system("cls");


}