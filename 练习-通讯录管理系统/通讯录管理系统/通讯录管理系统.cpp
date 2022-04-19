#include<iostream>
#include<string>
using namespace std;
#define MAX 1000   // 通讯录最大值 

// 菜单显示函数
void showMenu()
{
	cout << "*****************************  " << endl;
	cout << "*****   1. 添加联系人   *****   " << endl;
	cout << "*****   2. 显示联系人   *****   " << endl;
	cout << "*****   3. 删除联系人   *****   " << endl;
	cout << "*****   4. 查找联系人   *****   " << endl;
	cout << "*****   5. 修改联系人   *****   " << endl;
	cout << "*****   6. 清空联系人   *****   " << endl;
	cout << "*****   0. 退出通讯录   *****   " << endl;
	cout << "*****************************   " << endl;
}

// 联系人结构体
struct Person
{
	string m_name;    // 姓名
	int m_sex;        // 年龄
	int m_age;        // 性别
	string m_phone;   // 电话
	string m_addr;    // 住址

};

// 通讯录结构体
struct  Assressbooks
{
	struct Person personArry[MAX];   // 通讯录中保存的联系人数组
	int m_size;  // 通讯录中人员个数
};

// 1. 添加联系人
void addPerson(Assressbooks * abs)
{
	if (abs->m_size == MAX)
	{ 
		cout << "通讯录已满，无法添加！" << endl;
		return ;
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name; 
		abs->personArry[abs->m_size].m_name = name;

		//添加性别
		cout << "请输入性别：" << endl;
		cout << "1----男" << endl;
		cout << "2----女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArry[abs->m_size].m_sex = sex;
				break;

			}
			else
			{
				cout << "请输入正确的性别！" << endl;
			}
		}

		

		
		

		//添加年龄
		int age;
		cout << "请输入年龄：" << endl;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personArry[abs->m_size].m_age = age;
				break;
			}
			else
			{
				cout << "请输入正确的年龄!" << endl;
			}

		}
		
		

		//添加电话
		string phone;
		cout << "请输入电话：" << endl;
		while (true)
		{
			cin >> phone;
			if (phone.length() == 11)
			{
				abs->personArry[abs->m_size].m_phone = phone;
				break;
			}
			else
			{
				cout << "请输入正确的电话！" << endl;
			}
			
		}
		

		//添加住址
		string addr;
		cout << "请输入住址：" << endl;
		cin >> addr;
		abs->personArry[abs->m_size].m_addr = addr;


		//更新通讯录人数
		abs->m_size++;
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");  //清屏操作


	}
}


// 2.显示联系人
void showPerson(Assressbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "通讯录为空！ " << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
		
			cout << "姓名:"<<abs->personArry[i].m_name << "\t";
			cout << "性别：" << (abs->personArry[i].m_sex == 1 ? "男" : "女")<< "\t";
			cout << "年龄：" << abs->personArry[i].m_age << "\t";
			cout << "电话：" << abs->personArry[i].m_phone << "\t";
			cout << "住址：" << abs->personArry[i].m_addr << endl;
		
		}

	}
	system("pause");
	system("cls");
	
}


// 检测联系人是否存在
// 若存在，返回位置；若不存在，返回-1
// 参数1 通讯录   参数2  要对比的姓名
int isExit(Assressbooks* abs, string name) 
{
	for (int i=0 ; i < abs->m_size; i ++)
	{ 
		if (abs->personArry[i].m_name == name)
		{
			return  i;
		}
		

	}
	return -1;
		

}


//3.删除联系人  
void delPerson(Assressbooks* abs)
{
	cout << "请输入要删除的联系人： " << endl;
	string delname;
	cin >> delname;
	int ret = isExit(abs, delname);
	if (ret != -1)
	{
		//将删除的人后面的数据往前移动
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArry[i] = abs->personArry[i + 1];
		}
		abs->m_size--; //更新通讯录人员数据
		cout << delname << "删除成功!" << endl;




	}
	else
	{
		cout << "没有找到" << delname << endl;
	}

	system("pause");
	system("cls");

	

}




//4. 查找联系人
void findPerson(Assressbooks * abs)
{
	cout << "请输入要查询的联系人： " << endl;
	string findname;
	cin >> findname;
	int ret = isExit(abs, findname);
	if ( ret  != -1)
	{
		//显示查询到的人
		/*for (int i = 0; i < ; i++)
		{
			cout << "姓名：" << sbs->
		}*/
		cout << "姓名:" << abs->personArry[ret].m_name << "\t";
		cout << "性别：" << (abs->personArry[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArry[ret].m_age << "\t";
		cout << "电话：" << abs->personArry[ret].m_phone << "\t";
		cout << "住址：" << abs->personArry[ret].m_addr << endl;
	}
	else
	{
		cout << "没有找到" << findname << endl;
	}
	system("pause");
	system("cls");

}
 

// 5.修改联系人
void changePerson(Assressbooks* abs)
{
	cout << "请输入要修改的联系人： " << endl;
	string changename;
	cin >> changename;
	int ret = isExit(abs, changename);
	if (ret != -1)
	{
		//姓名
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		abs->personArry[ret].m_name = name;


		//性别
		cout << "请输入性别：" << endl;
		string  sex;
		//abs->personArry[ret].m_sex = (sex == "男" ? 1 : 0);
		//abs->personArry[ret].m_sex = sex;
		while (true)
		{
			cin >> sex;
			if (sex == "男" || sex == "女")
			{
				abs->personArry[ret].m_sex = (sex == "男" ? 1 : 0);
				break;
			}
			else
			{
				cout << "请输入正确的性别！“男” 或 “女”" << endl;
			}
		}
		
		

		// 年龄
		cout << "请输入年龄：" << endl;
		int age =0;
		//bs->personArry[ret].m_age = age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 100 )
			{
				abs->personArry[ret].m_age = age;
				break;
			}
			else
			{
				cout << "请输入0-100之间的年龄！" << endl;
			}
		}
		
		// 电话 
		cout << "请输入电话：" << endl;
		string phone;
		//abs->personArry[ret].m_phone = phone;
		while (true)
		{
			cin >> phone;
			if (phone.length() == 11)
			{
				abs->personArry[ret].m_phone = phone;
				break;

			}
			else
			{
				cout << "请输入正确的11位电话号码！" << endl;
			}
		}

		// 住址
		cout << "请输入住址： " << endl;
		string addr;
		cin >> addr;
		abs->personArry[ret].m_addr = addr;
	}

	else
	{
		cout << "没有找到" << changename << endl;
	}
	system("pause");
	system("cls");
}


// 6.清空联系人
void cleanPerson(Assressbooks* abs)
{
	abs->m_size = 0;  // 将当前记录的联系人数量置为0，做逻辑清空操作
	cout << "通讯录已清空！" << endl;
	system("pause");
	system("cls");
}
int main()
{
	Assressbooks abs;
	abs.m_size = 0;

	int select = 0;  //用户输入的变量
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:   //1. 添加联系人
			addPerson(&abs); //利用地址传递，可以修饰实参
			break;
		case 2:    //2. 显示联系人
			showPerson(&abs);
			break;
		case 3:    //3. 删除联系人
		/*{
			cout << "请输入要删除的姓名： " << endl;
			string name;
			cin >> name;
			if (isExit(&abs, name) == -1)
				cout << "不存在此人！" << endl;
			else
				cout << "找到了！" << endl;
		}*/
			delPerson(&abs);
			break;
		case 4:   //4. 查找联系人
			findPerson(&abs);
			break;
		case 5:    //5. 修改联系人
			changePerson(&abs);
			break;
		case 6:    //6. 清空联系人
			cleanPerson(&abs);
			break;
		case 0:   //0. 退出通讯录
			cout << "欢迎下次使用！" << endl;
			return 0;
			break;

		default:
			break;
		}

	}
	

	system("pause");
	return 0;
}
