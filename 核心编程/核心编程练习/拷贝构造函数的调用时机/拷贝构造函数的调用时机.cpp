#include<iostream>
using namespace std;

//拷贝构造函数的调用时机
//1. 使用一个已经创建完毕的对象来初始化一个新对象

//2. 值传递的方式给函数参数传值

//3. 值方式返回局部对象

class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person拷贝构造函数" << endl;
	}
	~Person()
	{
		cout << "Person析构构造函数" << endl;
	}

	int m_age;

};
//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);

}

//2. 值传递的方式给函数参数传值
void dowork(Person p)
{

}
void test02()
{
	Person p;
	dowork(p);
}

//3. 值方式返回局部对象
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork2();
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}