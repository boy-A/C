#include<iostream>
using namespace std;

//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;

};




//对比两个数据是否相等
template<typename T>
bool Compare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool Compare(Person& p1, Person& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = Compare(a, b);
	if (ret)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = Compare(p1, p2);
	if (ret)
	{
		cout << "P1=P2" << endl;
	}
	else
	{
		cout << "P1!=P2" << endl;
	}
}
int main()
{
	test02();
	system("pause");
	return 0;
}