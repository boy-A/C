#include<iostream>
using namespace std;


//继承中同名成员的处理方式
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base下的函数" << endl;
	}
	void func(int a )
	{
		cout << "Base下func(int a )的函数" << endl;
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
		cout << "Son下的函数" << endl;
	}


	int m_A;

private:

};
//同名成员属性
void test()
{
	Son s;
	cout << "Son 下的 m_A = " << s.m_A << endl;
	//如果需要通过子类对象  访问到父类中同名成员，需要加作用域
	cout << "Base 下的 m_A = " << s.Base::m_A << endl;
	
}

//同名成员函数
void test02() 
{
	Son s1;
	s1.func();  //son下的同名函数调用
	s1.Base::func();  //Base下的函数调用
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的所有同名成员函数
	//如果想要访问父类中的同名成员函数，需要加作用域
	s1.Base::func(100);
}
int main()
{
	//test();
	test02();
	system("pause");
	return 0;
}