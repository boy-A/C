#include<iostream>
#include<string>
using namespace std;
#define MAX 1000   // ͨѶ¼���ֵ 

// �˵���ʾ����
void showMenu()
{
	cout << "*****************************  " << endl;
	cout << "*****   1. �����ϵ��   *****   " << endl;
	cout << "*****   2. ��ʾ��ϵ��   *****   " << endl;
	cout << "*****   3. ɾ����ϵ��   *****   " << endl;
	cout << "*****   4. ������ϵ��   *****   " << endl;
	cout << "*****   5. �޸���ϵ��   *****   " << endl;
	cout << "*****   6. �����ϵ��   *****   " << endl;
	cout << "*****   0. �˳�ͨѶ¼   *****   " << endl;
	cout << "*****************************   " << endl;
}

// ��ϵ�˽ṹ��
struct Person
{
	string m_name;    // ����
	int m_sex;        // ����
	int m_age;        // �Ա�
	string m_phone;   // �绰
	string m_addr;    // סַ

};

// ͨѶ¼�ṹ��
struct  Assressbooks
{
	struct Person personArry[MAX];   // ͨѶ¼�б������ϵ������
	int m_size;  // ͨѶ¼����Ա����
};

// 1. �����ϵ��
void addPerson(Assressbooks * abs)
{
	if (abs->m_size == MAX)
	{ 
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return ;
	}
	else
	{
		//�������
		string name;
		cout << "������������" << endl;
		cin >> name; 
		abs->personArry[abs->m_size].m_name = name;

		//����Ա�
		cout << "�������Ա�" << endl;
		cout << "1----��" << endl;
		cout << "2----Ů" << endl;
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
				cout << "��������ȷ���Ա�" << endl;
			}
		}

		

		
		

		//�������
		int age;
		cout << "���������䣺" << endl;
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
				cout << "��������ȷ������!" << endl;
			}

		}
		
		

		//��ӵ绰
		string phone;
		cout << "������绰��" << endl;
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
				cout << "��������ȷ�ĵ绰��" << endl;
			}
			
		}
		

		//���סַ
		string addr;
		cout << "������סַ��" << endl;
		cin >> addr;
		abs->personArry[abs->m_size].m_addr = addr;


		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");  //��������


	}
}


// 2.��ʾ��ϵ��
void showPerson(Assressbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ� " << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
		
			cout << "����:"<<abs->personArry[i].m_name << "\t";
			cout << "�Ա�" << (abs->personArry[i].m_sex == 1 ? "��" : "Ů")<< "\t";
			cout << "���䣺" << abs->personArry[i].m_age << "\t";
			cout << "�绰��" << abs->personArry[i].m_phone << "\t";
			cout << "סַ��" << abs->personArry[i].m_addr << endl;
		
		}

	}
	system("pause");
	system("cls");
	
}


// �����ϵ���Ƿ����
// �����ڣ�����λ�ã��������ڣ�����-1
// ����1 ͨѶ¼   ����2  Ҫ�Աȵ�����
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


//3.ɾ����ϵ��  
void delPerson(Assressbooks* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ� " << endl;
	string delname;
	cin >> delname;
	int ret = isExit(abs, delname);
	if (ret != -1)
	{
		//��ɾ�����˺����������ǰ�ƶ�
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArry[i] = abs->personArry[i + 1];
		}
		abs->m_size--; //����ͨѶ¼��Ա����
		cout << delname << "ɾ���ɹ�!" << endl;




	}
	else
	{
		cout << "û���ҵ�" << delname << endl;
	}

	system("pause");
	system("cls");

	

}




//4. ������ϵ��
void findPerson(Assressbooks * abs)
{
	cout << "������Ҫ��ѯ����ϵ�ˣ� " << endl;
	string findname;
	cin >> findname;
	int ret = isExit(abs, findname);
	if ( ret  != -1)
	{
		//��ʾ��ѯ������
		/*for (int i = 0; i < ; i++)
		{
			cout << "������" << sbs->
		}*/
		cout << "����:" << abs->personArry[ret].m_name << "\t";
		cout << "�Ա�" << (abs->personArry[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArry[ret].m_age << "\t";
		cout << "�绰��" << abs->personArry[ret].m_phone << "\t";
		cout << "סַ��" << abs->personArry[ret].m_addr << endl;
	}
	else
	{
		cout << "û���ҵ�" << findname << endl;
	}
	system("pause");
	system("cls");

}
 

// 5.�޸���ϵ��
void changePerson(Assressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ�ˣ� " << endl;
	string changename;
	cin >> changename;
	int ret = isExit(abs, changename);
	if (ret != -1)
	{
		//����
		cout << "������������" << endl;
		string name;
		cin >> name;
		abs->personArry[ret].m_name = name;


		//�Ա�
		cout << "�������Ա�" << endl;
		string  sex;
		//abs->personArry[ret].m_sex = (sex == "��" ? 1 : 0);
		//abs->personArry[ret].m_sex = sex;
		while (true)
		{
			cin >> sex;
			if (sex == "��" || sex == "Ů")
			{
				abs->personArry[ret].m_sex = (sex == "��" ? 1 : 0);
				break;
			}
			else
			{
				cout << "��������ȷ���Ա𣡡��С� �� ��Ů��" << endl;
			}
		}
		
		

		// ����
		cout << "���������䣺" << endl;
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
				cout << "������0-100֮������䣡" << endl;
			}
		}
		
		// �绰 
		cout << "������绰��" << endl;
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
				cout << "��������ȷ��11λ�绰���룡" << endl;
			}
		}

		// סַ
		cout << "������סַ�� " << endl;
		string addr;
		cin >> addr;
		abs->personArry[ret].m_addr = addr;
	}

	else
	{
		cout << "û���ҵ�" << changename << endl;
	}
	system("pause");
	system("cls");
}


// 6.�����ϵ��
void cleanPerson(Assressbooks* abs)
{
	abs->m_size = 0;  // ����ǰ��¼����ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼����գ�" << endl;
	system("pause");
	system("cls");
}
int main()
{
	Assressbooks abs;
	abs.m_size = 0;

	int select = 0;  //�û�����ı���
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:   //1. �����ϵ��
			addPerson(&abs); //���õ�ַ���ݣ���������ʵ��
			break;
		case 2:    //2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:    //3. ɾ����ϵ��
		/*{
			cout << "������Ҫɾ���������� " << endl;
			string name;
			cin >> name;
			if (isExit(&abs, name) == -1)
				cout << "�����ڴ��ˣ�" << endl;
			else
				cout << "�ҵ��ˣ�" << endl;
		}*/
			delPerson(&abs);
			break;
		case 4:   //4. ������ϵ��
			findPerson(&abs);
			break;
		case 5:    //5. �޸���ϵ��
			changePerson(&abs);
			break;
		case 6:    //6. �����ϵ��
			cleanPerson(&abs);
			break;
		case 0:   //0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			return 0;
			break;

		default:
			break;
		}

	}
	

	system("pause");
	return 0;
}
