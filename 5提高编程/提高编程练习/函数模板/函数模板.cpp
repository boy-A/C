#include<iostream>
using namespace std;

//交换两个数据
template<typename T>
void Swap(T& a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a=10;
	int b=20;
	//利用模板实现数据交换
	//1. 自动类型推导--
	//Swap(a, b);
	//2. 显示指定类型
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	 
	//注意事项
	//1. 必须推导出一致的数据类型T才可以使用
	//2. 模板必须要确定出T的数据类型，才可以使用


}
int main()
{
	test();
	system("pause");
	return 0;

}