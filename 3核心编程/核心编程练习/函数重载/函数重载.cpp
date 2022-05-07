#include<iostream>
using namespace std;
 

//函数重载--提高函数复用性
//函数重载的满足条件：
//1. 必须在同一个作用域下
//2. 函数名相同
//3. 函数参数类型不同、个数不同、或顺序不同
void func()
{
	cout << "func的调用" << endl;
}

void func(int  a )
{
	cout << "func的调用!!" << endl;
}


//函数重载的注意事项
//1. 引用作为函数重载
void func01(int &a)
{
	cout << "func01(int a)调用" << endl;
}

void func01(const int &a)
{
	cout << "func01(const int a)调用" << endl;
}

//2. 函数重载碰到函数默认参数
// 函数重载尽量不使用默认参数，避免二义性
void func02(int  a, int b=10)
{
	cout << "func02(int  a, int b)的调用" << endl;
}

void func02(int  a)
{
	cout << "func02(int  a)的调用" << endl;
}
int main()
{
	//函数重载输出测试
	//func();
	//func(10);

	//函数重载注意事项输出测试-引用做函数重载
	//int a = 10;
	//func01(a);
	//func01(10);

	//函数重载注意事项输出测试-默认参数问题
	//func02(10);  //c此时会与func02的两个重载匹配，系统无法判断调用哪一个，产生错误
	system("pause");
	return 0;
}