#include<iostream>
using namespace std;

//当类模板碰到继承时，需要注意的点
//1. 当子类继承的父类是一个类模板时，子类在声明的时候需要指定出父类中的T的类型
//2. 如果不指定，编辑器无法给子类分配内存
//3. 如果想灵活指定出父类中T的类型，子类也需要编程类模板

template<class T>
class Base
{
public:

	T m;
};

//错误，必须知道父类中T的类型，才能继承给子类
//class Son :public Base   
//{
//};


//直接指定父类的类型
class Son :public Base<int>     
{
	
};

//如果要灵活继承父类中的T类型，子类也需要变为模板
template<class T1,class T2>
class Son2:public Base<T2>
{
public:
	Son2()
	{

		cout << "T1的数据类型：" << typeid(T1).name() << endl;
		cout << "T2的数据类型：" << typeid(T2).name() << endl;

	}
	T1 obj;

};

void test()
{
	Son2<int, char>s2;
}


int main()
{
	test();
	system("pause");
	return 0;
}