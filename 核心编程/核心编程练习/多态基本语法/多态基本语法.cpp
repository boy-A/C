#include<iostream>
using namespace std;


class Animal
{
public:
	virtual void speek()
	{
		cout << "动物在说话" << endl;
	}

};
class Cat:public Animal
{
public:
	//重写  函数返回值类型 函数名 参数列表 完全相同
	//子类重写时的virtual关键字可写可不写  父类中virtual要写

	void speek()
	{
		cout << "小猫在说话" << endl;
	}


};

//执行说话函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就是不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

//动态多态满足条件
//1. 有继承关系
//2. 子类重写父类的虚函数

//动态多态的使用
//父类的指针或者引用 执行子类对象
void doSpeek(Animal& animal)   // Animal &animal = cat
{
	animal.speek();
}

void test()
{
	Cat cat;
	doSpeek(cat);
}


int main()
{
	test();
	system("pause");
	return 0;
}