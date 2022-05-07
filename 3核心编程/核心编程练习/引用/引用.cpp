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

// 引用做函数返回值
//1. 不要返回局部变量的引用
int& test01()
{
	int a = 10;  //局部变量放在四区中的栈区
	return a;
}
// 引用做函数返回值
//2. 函数的引用可以作为左值
int& test02()
{
	// 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	//程序执行完毕才会释放空间
	static int a = 10;  
	return a;
}


//引用的本质--在C++内部实现是一个指针常量
//发现是引用，转换为int* const ref = &a;
void func03(int& ref)
{
	ref = 100;   //ref是引用，转换为*ref = 100；
}


//打印数据韩式
void showValue(const int& val)
{
	//val = 1000;
	cout << "val =  " << val << endl;
}



int main()
{
	
	//fun();
	//fun2();

	//int a = 10;
	//int b = 20;
	//mySwap01(a, b);
	//mySwap02(&a, &b);
	//mySwap03(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//test01输出实验
	//int &ref = test01();
	//cout << "引用做返回值 ref =  " << ref << endl;
	//cout << "引用做返回值 ref =  " << ref << endl;

	//test02输出实验
	//int& ref2 = test02();
	//cout << "引用做返回值 ref2 =  " << ref2 << endl;
	//cout << "引用做返回值 ref2 =  " << ref2 << endl;
	//test02() = 1000;  //如果函数的返回值是引用，这个函数调用可以作为左值，可以重新赋值。
	//cout << "引用做返回值 ref2 =  " << ref2 << endl;
	//cout << "引用做返回值 ref2 =  " << ref2 << endl;


	//引用的本质输出实验
	//int a = 10;
	//自动转换为 int* const ref= &a； 指针常量是指针指向不可改，也说明为什么引用不可改
	//int& ref = a;
	//ref = 20; // 内部发现ref是引用，自动转换成 * ref = 20 ； 
	//cout << "a = " << a << endl;
	//cout << "ref = " << ref << endl;


	//常量引用
	//使用场景：用来修饰形参，防止误操作
	//int& ref = 10;   //这种写法是不合法的
	//加上const之后 编译器将代码修改为  
	//int temp =10；const int  & ref= 10;
	
	const int& ref = 10;  //引用必须是一块合法的内存空间
	//ref = 20;  //加入const之后变为只读，不可以修改

	int a = 10;
	showValue(a);



	system("pause");
	return 0;
}