#include<iostream>
using namespace std;

//1. 构造函数的分类及应用
//分类
// 按照参数分类   有参构造和无参构造(默认构造)
//按照类型分类   普通构造 和 拷贝构造
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person有参构造函数" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person拷贝构造函数" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person析构函数" << endl;
	}

	int age;

};



//调用
void test01()
{
	//1. 括号法
	Person p1; // 默认构造函数调用
	//Person p1();
	//调用默认构造函数的时候，不要加（）
	//因为如果加（），编译器会认为这是一个函数的声明
	Person p2(10); //有参构造函数
	Person p3(p2); //拷贝构造函数

	//
	cout << "p2的年龄：" << p2.age<< endl;
	cout << "p3的年龄：" << p3.age << endl;
	//2. 显示法
	Person p1;
	Person p2 = Person(10); //有参构造
	Person p3 = Person(p2); // 拷贝构造
	Person(10); //匿名对象，特点：当前执行结束后，系统会立即回收匿名对象
	//注意：
	// Person(p3);
	// 不要利用拷贝构造函数 初始化匿名对象  编译器会把Person(p3); 理解为Person p3; 
	//3. 隐式转换法
	Person p4 = 10;  //相当于 Person p4 = Person(10);  有参构造
	Person p5 = p4;  //拷贝构造
}

int main1()
{
	test01();
	system("pause");
	return 0;
}