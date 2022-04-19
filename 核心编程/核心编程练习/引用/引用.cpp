#include<iostream>
using namespace std;


//引用的基本语法
void fun() 
{
	//数据类型 &别名 = 原名;
	int a = 10;
	int& b = a;  // 创建引用

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//引用的注意事项
void fun2()
{
	int a = 10;
	// 引用在定义的时候必须初始化！
	// int &b; 错误
	int& b = a;
	

	//2. 引用在初始化后不可以改变
	int c = 20;
	b = c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}

//引用做函数参数
//1. 值传递--形参改变，但是实参不变
void mySwap01(int a, int b)
{
	int temp = a;
	a = b; 
	b = temp;
	cout << "Swap01 a = " << a << endl;
	cout << "Swap01 b = " << b << endl;
}
//2. 地址传递 -- 形参会修饰实参，实参会改变
void mySwap02(int *a ,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "mySwap02 a = " << *a << endl;
	cout << "mySwap02 b = " << *b << endl;
}
//3. 引用传递--形参会修饰实参，实参会改变
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap03 a = " << a << endl;
	cout << "mySwap03 b = " << b << endl;
}
int main()
{
	
	//fun();
	//fun2();

	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//mySwap02(&a, &b);
	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}