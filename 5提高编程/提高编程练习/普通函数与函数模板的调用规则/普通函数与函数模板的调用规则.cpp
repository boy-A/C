#include<iostream>
using namespace std;


//普通函数与函数模板的调用规则：
//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
// 2. 可以通过空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以产生更好地匹配，优先调用函数模板


void Print(int a, int b)
{
	cout << "调用普通函数" << endl;
}
template<typename T>
void Print(T a, T b)
{
	cout << "调用函数模板" << endl;
}
template<typename T>
void Print(T a, T b,T c)
{
	cout << "调用重载的函数模板" << endl;
}

void test()
{
	int a = 0;
	int b = 0;
	//如果函数模板和普通函数都可以实现，优先调用普通函数
	//Print(a, b);   

	//通过空模板参数列表，强制调用函数模板
	//Print<>(a, b);

	//函数模板也可以发生重载
	//Print(a, b, 100);
	
	//如果函数模板可以产生更好地匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	Print(c1, c2);
}
int main()

{

	test();
	system("pause");
	return 0;
}