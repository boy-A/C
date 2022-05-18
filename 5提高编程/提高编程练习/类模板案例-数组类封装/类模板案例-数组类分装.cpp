#include<iostream>
#include<string>
using namespace std;
#include"MyArray.hpp"

//案例描述：实现一个通用的数组类，要求如下：
//1. 可以对内置数据类型以及自定义数据类型的数据进行存储
//2. 将数组中的数据存储到堆区
//3. 构造函数中可以传入数组的容量
//4. 提供对应的拷贝构造函数以及operator= 防止浅拷贝问题
//5. 提供尾插法和尾删法对数组中的数据进行增加和删除
//6. 可以通过下标的方式访问数组中的元素
//7. 可以获取数组中当前元素的个数和数组的容量

void PrintIntArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}


void test01()
{
	MyArray<int>arr1(5);
	//MyArray<int>arr2(arr1);
	//MyArray<int> arr3(100);
	//arr3 = arr1;

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	PrintIntArray(arr1);

	cout << "arr1的容量：" << arr1.getCapacity() << endl;
	cout << "arr1的大小：" << arr1.getSize()<< endl;

	MyArray<int>arr2(arr1);
	cout << "arr2的打印输出：" << endl;
	PrintIntArray(arr2);
	arr2.Pop_Back();
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;




}

//测试自定义数据类型
class Person
{
public:
	Person(){}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	string m_Name;
	int m_Age;


};
void PrintPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}

}

void test02()
{
	MyArray<Person>arrz(10);
	Person p1("一", 15);
	Person p2("二", 41);
	Person p3("三", 24);
	Person p4("四", 33);
	//将数据插入到数组中
	arrz.Push_Back(p1);
	arrz.Push_Back(p2);
	arrz.Push_Back(p3);
	arrz.Push_Back(p4);
	//打印数组
	PrintPersonArray(arrz);
	//输出容量
	cout << "arrz的容量：" << arrz.getCapacity() << endl;
	//输出大小
	cout << "arrz的大小：" << arrz.getSize() << endl;
	

}
int main()
{
	test02();
	system("pause");
	return 0;
}