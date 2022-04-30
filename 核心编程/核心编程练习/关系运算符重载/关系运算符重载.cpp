#include<iostream>
using namespace std;


// 关系运算符重载
class Person 
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;

	}

	//重载==
	bool operator==(Person &p)
	{
		if (this->m_Name == p.m_Name &&  this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	//重载 ！=
	bool operator!=(Person &p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("啊哈",18);
	//Person p2("哎呦喂", 20);
	Person p2("啊哈", 18);
	cout << p1.m_Name << p1.m_Age << endl;
	cout << p2.m_Name << p2.m_Age << endl;
	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}
void test02()
{
	Person p1("啊哈", 18);
	//Person p2("哎呦喂", 20);
	Person p2("啊哈", 18);
	cout << p1.m_Name << p1.m_Age << endl;
	cout << p2.m_Name << p2.m_Age << endl;
	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}
	else
	{
		cout << "p1和p2相等" << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}