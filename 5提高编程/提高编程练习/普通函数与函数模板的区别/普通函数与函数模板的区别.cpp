#include<iostream>
using namespace std;

//普通函数与函数模板的区别
//1. 普通函数调用可以发生隐式类型转换
//2. 函数模板 用自动类型推导，不可以发生隐式类型转换
//3. 函数模板 用显示指定类型，可以发生隐式类型转换


template<typename T>
int  Add(T a, T b)
{
	return a + b;

}
void test()
{
	int a = 10;
	int  b = 20;
	char c = 'c';
	Add(a, b);
	//自动类型推导 不能隐式类型转换
	//Add(a, c);
	int l= Add<char>(a, c);
	cout << l << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}