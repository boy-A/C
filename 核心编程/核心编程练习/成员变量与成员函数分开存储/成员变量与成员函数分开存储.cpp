#include<iostream>
using namespace std;
//成员变量 与 成员函数 分开存储
class Person
{
public:
	int m_A;  //非静态成员变量 属于类的对象上的
	static int m_B;  //静态成员变量  不属于类对象上
	void fun() {}   //非静态成员函数  不属于类对象上
	static void func() {}   // 静态成员函数  不属于类对象上
	 
};
int Person::m_B = 0;
void test01()
{
	Person p;
	//空对象占用内存空间是 1个字节
	//C++编译器会给每个空对象也分配一个字节空间，是为了空对象占内存的位置
	//每个空对象也要有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}