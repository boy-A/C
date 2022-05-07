#include<iostream>
using namespace std;

//递增运算符重载
//自定义整型

class MyInt
{
 friend ostream & operator<<(ostream& cout, MyInt myint);
public:

	MyInt()
	{ 
		m_Num = 0;
	}

	//重载++（前置）运算符  返回引用是为了一直对一个数据进行递增操作
	MyInt& operator++()
	{
		m_Num++;
		return *this;
	}
	//重载++（后置）运算符    返回引用是为了一直对一个数据进行递增操作
	//void operator++(int) int代表占位参数，可以用于区别前置和后置
	MyInt operator++(int)
	{
		// 先 记录当前结果
		MyInt tem = *this;
		//后 递增
		m_Num++;
		//最后返回记录结果
		return tem;
	}
private:
	int m_Num;
};



// 重载左移运算符
ostream& operator<<(ostream& cout, MyInt myint)
{
	cout << myint.m_Num << endl;
	return cout;
}

void test01()
{
	MyInt myint;
	cout << ++myint << endl;
}

void test02()
{
	MyInt myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;

}
