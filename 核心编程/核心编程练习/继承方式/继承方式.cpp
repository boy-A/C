#include<iostream>
using namespace std;
//�̳з�ʽ
//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
class Son1:public Base1
{
public:
	void func()
	{
		m_A = 10; //�����еĹ���Ȩ�� ����������Ȼ�ǹ���Ȩ��
		m_A = 20; //�����еı���Ȩ��  ����������Ȼ�Ǳ���Ȩ��
		//m_C = 30;  //�����е�˽��Ȩ��  �������з��ʲ���
	}
	
};


//�����̳�
class  Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son2:protected Base2
{
	void func()
	{
		m_A = 100;
		m_B = 100;

	}


};


void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;  //��son1��  m_B�Ǳ���Ȩ��  �����޷�����
	
}

void test02()
{
	Son2 s2;
	//s2.m_A = 10;  //��Son2�� m_A��Ϊ����Ȩ��  ���ⲻ�ܷ���
	//s2.m_B = 10;  //��Son2�� m_B��Ϊ����Ȩ��  ���ⲻ�ܷ���
	
}



int main()
{
	system("pause");
	return 0;
}