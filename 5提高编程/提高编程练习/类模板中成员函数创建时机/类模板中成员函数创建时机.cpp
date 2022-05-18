#include<iostream>
using namespace std;

//类模板中成员函数和普通类中成员函数穿件时机的却别
//1.普通类中成员函数一开始就可以创建
//2.类模板中成员函数在调用时才创建

class Person1
{
public:
	void showPerso1()
	{
		cout << "Person1 show" << endl;
	}

};

class Person2
{
public:
	void showPerso2()
	{
		cout << "Person2 show" << endl;
	}

};

template<class T>
class MyClass
{
public:
	T obj;
	//类模板中的成员函数
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}



};

void test()
{
	MyClass<Person2>m;
	//m.fun1();
	m.fun2();

}


int main()
{
	system("pause");
	return 0;
}