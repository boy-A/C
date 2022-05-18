#include<iostream>
#include<string>
using namespace std;

//类模板与函数模板的区别
//1.类模板没有自动类型推导的使用方法
//2.类模板在模板参数列表中可以有默认参数
template<class TypeName, class TypeAge = int >
class Person
{
public:
	Person(TypeName name,TypeAge age  )
	{
		m_name = name;
		m_age = age;

	}

	void showPerson()
	{
		cout << "name:" << m_name << endl;
		cout << "age:" << m_age << endl;
	}
	TypeName m_name;
	TypeAge m_age;

};

void test01()
{
	//Person p1("sun", 1);   1.类模板没有自动类型推导的使用方法
	Person<string,int>p1("sun", 18);
	p1.showPerson();

}
void test02()
{
	//2.类模板在模板参数列表中可以有默认参数
	Person<string> p2("A", 15);   //因为类模板中有默认参数，所以这里省略int类型的指定
	p2.showPerson();
}
int main()
{
	test02();
	system("pause");
	return 0;
}