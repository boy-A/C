#include<iostream>
using namespace std;
#include <string>

//类对象作为类成员
//手机类
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
	}
	string m_PName;

};

//人类
class Person
{
public:

	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{

	}

	string m_Name;
	Phone m_Phone;

};

void test()
{
	
	Person p("张三","苹果");
	cout << p.m_Name << p.m_Phone.m_PName << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}