#include<iostream>
using namespace std;

//�Ӻ����������

class Person
{
public:
	int m_A;
	int m_B;

	//��Ա�������������
	Person operator+ (Person& p)
	{
		Person tem;
		tem.m_A = this->m_A + p.m_A;
		tem.m_B = this->m_B + p.m_B;
		return tem;
	}


};

//ȫ�ֺ��������������
Person operator+ (Person& p1,Person p2)
{
	Person tem;
	tem.m_A = p1.m_A + p2.m_A;
	tem.m_B = p1.m_B  + p2.m_B;
	return tem;
}

void test()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	 
	Person p3 = p1 + p2;
	//��Ա������������صı��ʵ���
	Person p3 = p1.operator+(p2);
	//ȫ�ֺ�����������صı��ʵ���
	Person p3 = operator+(p1, p2);
	cout << p3.m_A<< endl;
	cout << p3.m_B<< endl;
	


}



int main()
{
	test();
	system("pause");
	return 0;

}