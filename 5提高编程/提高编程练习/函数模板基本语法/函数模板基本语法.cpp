#include<iostream>
using namespace std;

//函数模板交换两个数据

//声明一个模板，告诉编译器后面代码中紧跟着的T是一个通用数据类型
template<typename T>
void Swap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;


	//利用函数模板交换
	//两种方式使用函数模板
	//1. 自动类型推导
	//Swap(a, b);

	//2. 显示指定类型
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

int main()
{
	test();
	system("pause");
	return 0;
}