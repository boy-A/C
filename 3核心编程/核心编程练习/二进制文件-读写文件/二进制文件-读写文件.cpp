#include<iostream>
#include<fstream>
using namespace std;

//�������ļ� - д�ļ�
class  Person
{
public:
	char m_Name[64];
	int m_Age;

};

void testWrite()
{
	//1. ����ͷ�ļ�

	//2. ����������
	ofstream ofs;
	//3. ���ļ�
	ofs.open("Person.txt",ios::out | ios::binary);
	//4. д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p,sizeof(Person));
	//5. �ر��ļ�
	ofs.close();
}

//�������ļ�- ���ļ�
void testRead()
{
	//1. ����ͷ�ļ�

	//2.����������
	ifstream ifs;
	//3.���ļ� �ж��ļ�ʯͷ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	{
		if (!ifs.is_open())
		{
			cout << "�ļ���ʧ�ܣ�" << endl;
			return;
		}
	}
	//4.���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������ " << p.m_Name << "���䣺 " << p.m_Age << endl;
	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	//testWrite();
	testRead();
	system("pause");
	return 0;
}