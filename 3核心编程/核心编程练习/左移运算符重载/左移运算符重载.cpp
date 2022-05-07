#include<iostream>
using namespace std;


//左移运算符重载
class Person
{
public:

	// 利用成员函数重载左移运算符    p.operator<<(cout)  简化后p<<cout
	//通常不利用成员函数重载<<运算符，因为无法实现cout在左侧
	//void operator << (cout)
	//{

	//}
	int m_A;
	int m_B;


};

//只能用全局函数重载左移运算符
ostream & operator<<(ostream &cout,Person p)
{
	cout << "m_A = " << p.m_A << "m_B = "<<p.m_B<< endl;
	return cout;
}

void test()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;
	cout << p <<endl;
	//cout << "p.m_B = " << p.m_B<< endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}
