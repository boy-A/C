#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"
#include<fstream>
#define FILENAME "empFile.txt" 
class  WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void showMenu();

	//ְ������ָ��
	Worker ** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//������ӵ�ְ������
	void Save();

	//ͳ��Ա������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();
	

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~WorkerManager();


	//��¼ְ������
	int m_EmpNum;

	//չʾְ����Ϣ
	void Show_Emp();

	//��־�洢ְ�����ݵ��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	
	//����ְ������ж�ְ���Ƿ���ڣ�������ڷ���ְ���������е�λ�ã������ڷ���-1
	int IsExist(int id);
	

	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();
};

