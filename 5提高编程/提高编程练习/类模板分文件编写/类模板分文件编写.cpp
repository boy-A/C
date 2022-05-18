#include<iostream>
#include<string>
using namespace std;

//第一种解决方法：直接包含源文件
#include"Person.cpp"

//第二种解决方式：将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
//#include"Person.hpp"


//类模板成员函数分文件编写产生的问题以及解决方法
//类模板中成员函数创建时机是在调用时，导致份文件编写时链接不到
// 解决方法1：直接包含.cpp文件
// 解决方法2：将声明和实现写到同一个文件中,并更改后缀名为.hpp，hpp是约定的名称，并不是强制

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << " " << "age:" << this->m_Age << endl;
//}

void test()
{
	Person<string, int>p("Jom", 15);
	p.showPerson();
}

int main()
{
	test();
	system("pause");
	return 0;
}