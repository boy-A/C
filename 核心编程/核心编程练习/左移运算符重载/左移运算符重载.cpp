#include<iostream>
using namespace std;


//�������������
class Person
{
public:

	// ���ó�Ա�����������������    p.operator<<(cout)  �򻯺�p<<cout
	//ͨ�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
	//void operator << (cout)
	//{

	//}
	int m_A;
	int m_B;


};

//ֻ����ȫ�ֺ����������������
ostream & operator<<(ostream &cout,Person p)
{
	cout << "m_A = " << p.m_A << "m_B = "<<p.m_B<< endl;
	return cout;
}

void test()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	cout << p <<endl;
	//cout << "p.m_B = " << p.m_B<< endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}
