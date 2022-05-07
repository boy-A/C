#include<iostream>
using namespace std;

class Base
{
public:
	static int m_A;  //静态成员类内声明，类外初始化（初始化需要加作用域）
	static void func()
	{
		cout << "Base下的静态成员函数" << endl;
	}
	static void func(int a )
	{
		cout << "Base下func(int a )的静态成员函数" << endl;
	}
     

};
 int Base:: m_A = 100;

 class Son:public Base
 {
 public:
	 static int m_A;
	 static void func()
	 {
		 cout << "Son下的静态成员函数" << endl;
	 }



 };
 int Son::m_A = 200;

 //同名静态成员属性
 void test01()
 {
	 //方法一：通过对象访问
	 Son s;
	 cout << "Son 下的m_A = " << s.m_A << endl;
	 cout << "Base 下的 m_A = " << s.Base::m_A << endl;

	 //方法二：通过类名访问
	 cout << "通过类名的方式访问************" << endl;
	 cout << "Son下的m_A = " << Son::m_A << endl;
	 //第一个::代表通过类名的方式访问  第二个::代表访问父类作用域下
	 cout << "Base下的m_A = " << Son::Base::m_A << endl;


 }
 //同名静态成员函数
 void test02()
 {
	 //方法一：通过对象的方式访问
	 cout << "通过对象的方式访问**********" << endl;
	 Son s;
	 s.func();
	 s.Base::func();

	 //方法二：通过类名的方式访问
	 cout << "通过类名的方式访问**********" << endl;
	 Son::func();
	 Son::Base::func();

	 //子类出现和父类同名的静态成员函数，也会隐藏掉父类中的所有同名成员函数
	 //如果需要访问父类中的隐藏的同名静态成员，需要加作用域
	 Son::Base::func(1000);
 }
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}