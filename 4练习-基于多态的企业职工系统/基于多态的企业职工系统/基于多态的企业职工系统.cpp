#include<iostream>
#include"workerManager.h"
using namespace std;
#include"Worker.h"
#include"employee.h"
#include"Manager.h"
#include"Boss.h"



int main()
{


	//测试代码
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();
	//delete worker;


	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.showMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:   //退出系统
			wm.exitSystem();
			break;
		case 1:  //添加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.Show_Emp();
			break;
		case 3:   //删除职工
			wm.Del_Emp();
			break;

		case 4:  //修改职工
			wm.Mod_Emp();
			break;
		case 5:  //查找职工
			wm.Find_Emp();
			break;
		case 6:  //按照编号排序
			wm.Sort_Emp();
			break;
		case 7:  //清空文件
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}

	}
	
	system("pause");
	return 0;
}