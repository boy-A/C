#include<iostream>
using namespace std;

//对象的初始化和清理
//1. 构造函数 进行初始化
class Person
{
	//1.1 构造函数
	//没有返回值，不用写void
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
public:
	Person()
	{
		cout << "Person构造函数" << endl;
	
	}
	//2. 析构函数  进行清理操作
	//没有返回值 不写void
	//函数名和类名相同 在名称前面加~
	//析构函数没有参数，不能发生重载
	//对象在销毁前 会自动调用析构函数，而且只会调用一次
	~Person()
	{
		cout << "Person析构函数" << endl;
	}


};

void test01()
{
	Person p;  //对象是局部变量，存在栈上，test01执行完毕后会释放这个对象
}






int main()
{ 
	Person p;//main函数中的变量依然是局部变量，但是生命周期和全局变量一样长，执行完main函数中最后一行代码后才会释放
	test01();
	system("pause");
	return 0;
}