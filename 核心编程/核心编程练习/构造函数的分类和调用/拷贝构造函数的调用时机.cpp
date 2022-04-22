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

void test01()
{
	Person p10(20);
}
int main()
{
	system("pause");
	return 0;
}