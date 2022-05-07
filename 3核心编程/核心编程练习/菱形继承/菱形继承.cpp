#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};
//利用虚继承 解决菱形继承的问题
// 在继承之前加上virtual变为虚继承
// Animal类称为  虚基类
//羊类
class Sheep: virtual public Animal
{
public:


};


//驼类

class Tuo:virtual public Animal
{
public:


};


//羊驼类
class SheepTuo:public Sheep,public Tuo
{
public:

};


void test01()
{
	SheepTuo st;
	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//数据只需要一份就够了 菱形继承导致有两份数据，资源浪费
}


int main()
{
	test01();
	system("pause");
	return 0;
}