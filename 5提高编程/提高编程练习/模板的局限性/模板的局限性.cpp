#include<iostream>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;

};




//�Ա����������Ƿ����
template<typename T>
bool Compare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool Compare(Person& p1, Person& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = Compare(a, b);
	if (ret)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = Compare(p1, p2);
	if (ret)
	{
		cout << "P1=P2" << endl;
	}
	else
	{
		cout << "P1!=P2" << endl;
	}
}
int main()
{
	test02();
	system("pause");
	return 0;
}