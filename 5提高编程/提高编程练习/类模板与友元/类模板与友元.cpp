#include<iostream>
#include<string>
using namespace std;


//类模板配合友元函数的类内和类外实现
//全局函数类内实现--直接在类内声明友元即可
//全局函数类外实现--需要提前让编译器知道全局函数的存在

//提前让编译器知道Person类的存在
template<class T1,class T2>
class Person;

//类外实现
//需要让编译器知道PrintPerson2的存在，所以要提到前面书写
template<class T1, class T2>
void PrintPerson2(Person<T1, T2> p)
{
	cout << "全局函数类外实现" << endl;
	cout << "姓名：" << p.m_Name << "  " << "年龄：" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 类内实现
	friend  void PrintPerson(Person<T1,T2> p)
	{ 
		cout << "姓名：" << p.m_Name << "  " << "年龄：" << p.m_Age << endl;
	}

	//全局函数 类外实现
	//需要加空模板参数列表
	//如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在
	friend  void PrintPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;

	}
private:
	T1 m_Name;
	T2 m_Age;
};


void test()
{
	Person<string, int>p("Tom", 15);
	PrintPerson2(p);
}

int main()
{
	test();
	system("pause");
	return 0;
}