#include<iostream>
using namespace std;

//�������캯���ĵ���ʱ��
//1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

//2. ֵ���ݵķ�ʽ������������ֵ

//3. ֵ��ʽ���ؾֲ�����

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯��" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person�вι��캯��" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person�������캯��" << endl;
	}
	~Person()
	{
		cout << "Person�������캯��" << endl;
	}

	int m_age;

};

void test01()
{
	Person p10(20);
}
int main()
{
	system("pause");
	return 0;
}