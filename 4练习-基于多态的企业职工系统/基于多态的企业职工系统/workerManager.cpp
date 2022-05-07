#include<iostream>
#include"workerManager.h"
#include"employee.h"
#include"Manager.h"
#include"Worker.h"
#include"Boss.h"


//���캯��
WorkerManager::WorkerManager()
{
	////��ʼ������
	//this->m_EmpNum = 0;
	//this->m_EmpArray = NULL;

	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	//1. �ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;   //���Բ�����
		this->m_EmpNum = 0;		//��ʼ������
		this->m_FileIsEmpty = true;			//��ʼ���ļ�Ϊ�յı�־
		this->m_EmpArray = NULL;		//��ʼ������
		ifs.close();		//�ر��ļ�
		return;

	}
	// 2. �ļ�����������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	
	}

	//3. �ļ����ڣ����Ҽ�¼���ݸ���
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݣ��浽������
	this->init_Emp();


	//���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ����ţ� " << this->m_EmpArray[i]->m_Id<<"\t"
	//		<< "������ " << this->m_EmpArray[i]->m_Name << "\t"
	//		<< "���ű�ţ� " << this->m_EmpArray[i]->m_DeptId << endl;
	//}



}

//��������
WorkerManager::~WorkerManager()
{
	//��������ʹ�ú�Ҫ�ֶ��ͷ�
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

//��ʾ�б�
void WorkerManager::showMenu()
{
	cout << "***********************************************" << endl;
	cout << "*************��ӭʹ��ְ������ϵͳ**************" << endl;
	cout << "*************** 0. �˳�����ϵͳ ***************" << endl;
	cout << "*************** 1. ���ְ����Ϣ ***************" << endl;
	cout << "*************** 2. ��ʾְ����Ϣ ***************" << endl;
	cout << "*************** 3. ɾ��ְ����Ϣ ***************" << endl;
	cout << "*************** 4. �޸�ְ����Ϣ ***************" << endl;
	cout << "*************** 5. ����ְ����Ϣ ***************" << endl;
	cout << "*************** 6. ���ձ������ ***************" << endl;
	cout << "*************** 7. ��������ĵ� ***************" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

//�˳�����
void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "��������ӵ�ְ�������� " << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//���
		//��������¿ռ��С
		int newsize = this->m_EmpNum + addnum;  //�¿ռ����� = ԭ����¼���� + ��������

		//�����¿ռ�
		Worker ** newSpace = new Worker* [newsize];

		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray!= NULL)
		{
			for (int  i = 0; i < this->m_EmpNum ; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		
		}

		//�����������
		for(int i=0;i<addnum;i++)\
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ�������� " << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1. ��ְͨ��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ܲ�" << endl;
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
	
			//��������ְ��ָ�룬���浽������
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newsize;

		//�ɹ���Ӻ� ���浽�ļ���
		this->Save();

		//�����ļ��Ƿ�Ϊ�յı�־Ϊfalse
		this->m_FileIsEmpty = false;			

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addnum << "����ְ��!" << endl;

	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}

//������ӵ�ְ������
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

//ͳ��Ա������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	 
	int id;
	string name;
	int did;

	int num = 0;  //ͳ�������ı���

	while (ifs>>id&&ifs>>name&&ifs>>did)
	{
		num++;

	}
	ifs.close();
	return num;

}

//��ʼ��Ա��
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
		//���ݲ�ͬ�Ĳ���id������ͬ����
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
		//�����������
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

//չʾְ����Ϣ
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->showInfo();
		
		}
	}
	system("pause");
	system("cls");
}

//����ְ������ж�ְ���Ƿ���ڣ�������ڷ���ְ���������е�λ�ã������ڷ���-1
int  WorkerManager::IsExist(int id)
{
	int index = -1;  //���� -1

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

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//����ǰ�ƣ����ǵ�Ҫɾ��������
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			//����������ְ������
			this->m_EmpNum--;   
			//����ͬ�����µ��ļ���
			this->Save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�û���ҵ���¼��" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ����Ϊret��ְ��
			delete this->m_EmpArray[ret];  //ԭ��¼ɾ��
			//���¸�ְ����ֵ
			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "���ҵ�" << id << "��ְ�����������µ�ְ���ţ�" << endl;
			cin >> newId;
			cout << "�������µ�������" << endl;
			cin >> newName;
			cout << "�������µĸ�λ��" << endl;
			cout << "1. ��ְͨ��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ܲ�" << endl;
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
			//��������  ��������
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << this->m_EmpArray[ret]->m_Id << endl;
			this->Save();

		}
		else
		{
			cout << "�޸�ʧ�ܣ�û���ҵ���ְԱ��" << endl;
		}
		system("pause");
		system("cls");
	}
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;

	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1. ��ְ����Ų���" << endl;
		cout << "2. ����������" << endl;
		int select = 0;
		cin >> select;
		//��ְ����Ų���
		if (select == 1)  
		{
			int id;
			cout << "������Ҫ���ҵ�ְ����ţ�" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "û���ҵ���ְ����" << endl;
			}
		}
		//����������
		else if(select == 2 ) 
		{
			string name;
			cout << "������Ҫ���ҵ�ְ��������" << endl;
			cin >> name;

			bool flag = false;   //���ҵ��ı�־
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�����ְ������Ϣ���£�" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}



			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ�û���ҵ���ְ��" << endl;
			}


		}
		else
		{
			cout << "����ѡ������" << endl;
		}


	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1. ��ְ����Ž�������" << endl;
		cout << "2. ��ְ����Ž��н���" << endl;
		int select;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			//����
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				//����
				if (select == 1)
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;

					}
				}
				//����
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
		cout << "����ɹ��������Ľ���ǣ�" << endl;
		this->Save();
		this->Show_Emp();


	}
}

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1. ȷ��" << endl;
	cout << "2. ����" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		//��ģʽ  ios::trunc ������� ɾ���ļ������´���
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
		cout << "��ճɹ���" << endl;

	}
	system("pause");
	system("cls");


}