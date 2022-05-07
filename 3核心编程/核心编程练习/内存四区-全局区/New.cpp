#include<iostream>
using namespace std;


//1. new 的基本语法

int* fun()
{
	//在堆区创建整形数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//释放堆区数据，需要使用delete
	delete  p; 
	//cout << *p << endl;    // 内存已经释放，再次访问就是非法操作，会报错
}

// 2. 在堆区利用new开辟数组。
void test02()
{
	int *arr = new int[10];   // 数组有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;  //给数组赋值
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	//释放数组的时候 要加[]才可以
	delete[] arr;
}
int main()
{

	test01();
	test02();
	system("pause");
	return 0;
}