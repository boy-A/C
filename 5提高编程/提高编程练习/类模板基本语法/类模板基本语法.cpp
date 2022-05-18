#include<iostream>
#include<string>
using namespace std;

//类模板
template<class TypeName , class TypeAge>
class Person
{
public:
	Person(TypeName name, TypeAge age)
	{
		m_name = name;
		m_Age = age;
	}
	void showPerson()
	{
		cout << "姓名：" << this->m_name << endl;
		cout << "年龄：" << this->m_Age<< endl;
	}
	TypeName m_name;
	TypeAge m_Age;


};

void test()
{
	Person<string, int> p1("sun", 18);
	p1.showPerson();
}


int main()
{
	test();
	system("pause");
	return 0;
}