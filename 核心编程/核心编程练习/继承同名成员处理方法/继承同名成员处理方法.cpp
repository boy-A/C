#include<iostream>
using namespace std;


//�̳���ͬ����Ա�Ĵ���ʽ
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base�µĺ���" << endl;
	}
	void func(int a )
	{
		cout << "Base��func(int a )�ĺ���" << endl;
	}
	int m_A;


};

class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son�µĺ���" << endl;
	}


	int m_A;

private:

};
//ͬ����Ա����
void test()
{
	Son s;
	cout << "Son �µ� m_A = " << s.m_A << endl;
	//�����Ҫͨ���������  ���ʵ�������ͬ����Ա����Ҫ��������
	cout << "Base �µ� m_A = " << s.Base::m_A << endl;
	
}

//ͬ����Ա����
void test02() 
{
	Son s1;
	s1.func();  //son�µ�ͬ����������
	s1.Base::func();  //Base�µĺ�������
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص������е�����ͬ����Ա����
	//�����Ҫ���ʸ����е�ͬ����Ա��������Ҫ��������
	s1.Base::func(100);
}
int main()
{
	//test();
	test02();
	system("pause");
	return 0;
}