#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"
#include<fstream>
#define FILENAME "empFile.txt" 
class  WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void showMenu();

	//职工数组指针
	Worker ** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存添加的职工数据
	void Save();

	//统计员工数量
	int get_EmpNum();

	//初始化员工
	void init_Emp();
	

	//退出系统
	void exitSystem();

	//析构函数
	~WorkerManager();


	//记录职工人数
	int m_EmpNum;

	//展示职工信息
	void Show_Emp();

	//标志存储职工数据的文件是否为空
	bool m_FileIsEmpty;
	
	//按照职工编号判断职工是否存在，如果存在返回职工在数组中的位置，不存在返回-1
	int IsExist(int id);
	

	//删除职工
	void Del_Emp();

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();
};

