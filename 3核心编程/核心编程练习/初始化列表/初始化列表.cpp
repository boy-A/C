#include<iostream>
using namespace std;

class Person
{
public:
	//���캯����ʼ����Ա
	//Person(int a, int b, int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}


	//��ʼ���б��ʼ������
	Person(int a , int b , int c):m_a(a),m_b(b),m_c(c)
	{

	}
	int m_a;
	int m_b;
	int m_c;
};

void test()
{
	Person p(30,20,10);
	cout << "m_a = " <<p.m_a<< endl;
	cout << "m_b = " << p.m_b << endl;
	cout << "m_b = " << p.m_b << endl;
}
int main()
{

	test();
	system("pause");
	return 0;
}