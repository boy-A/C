#include<iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա
//�ֻ���
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
	}
	string m_PName;

};

//����
class Person
{
public:

	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{

	}

	string m_Name;
	Phone m_Phone;

};

void test()
{
	
	Person p("����","ƻ��");
	cout << p.m_Name << p.m_Phone.m_PName << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}