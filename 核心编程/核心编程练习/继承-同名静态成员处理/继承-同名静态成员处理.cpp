#include<iostream>
using namespace std;

class Base
{
public:
	static int m_A;  //��̬��Ա���������������ʼ������ʼ����Ҫ��������
	static void func()
	{
		cout << "Base�µľ�̬��Ա����" << endl;
	}
	static void func(int a )
	{
		cout << "Base��func(int a )�ľ�̬��Ա����" << endl;
	}
     

};
 int Base:: m_A = 100;

 class Son:public Base
 {
 public:
	 static int m_A;
	 static void func()
	 {
		 cout << "Son�µľ�̬��Ա����" << endl;
	 }



 };
 int Son::m_A = 200;

 //ͬ����̬��Ա����
 void test01()
 {
	 //����һ��ͨ���������
	 Son s;
	 cout << "Son �µ�m_A = " << s.m_A << endl;
	 cout << "Base �µ� m_A = " << s.Base::m_A << endl;

	 //��������ͨ����������
	 cout << "ͨ�������ķ�ʽ����************" << endl;
	 cout << "Son�µ�m_A = " << Son::m_A << endl;
	 //��һ��::����ͨ�������ķ�ʽ����  �ڶ���::������ʸ�����������
	 cout << "Base�µ�m_A = " << Son::Base::m_A << endl;


 }
 //ͬ����̬��Ա����
 void test02()
 {
	 //����һ��ͨ������ķ�ʽ����
	 cout << "ͨ������ķ�ʽ����**********" << endl;
	 Son s;
	 s.func();
	 s.Base::func();

	 //��������ͨ�������ķ�ʽ����
	 cout << "ͨ�������ķ�ʽ����**********" << endl;
	 Son::func();
	 Son::Base::func();

	 //������ֺ͸���ͬ���ľ�̬��Ա������Ҳ�����ص������е�����ͬ����Ա����
	 //�����Ҫ���ʸ����е����ص�ͬ����̬��Ա����Ҫ��������
	 Son::Base::func(1000);
 }
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}