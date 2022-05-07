#include<iostream>
using namespace std;
const double PI = 3.14;

//设计一个圆类，求圆的周长
class Circle
{
	//访问权限
public:

	//属性
	int m_r;

	//行为
	//获取周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}


};

//学生类
class Student
{
public:
	string name;
	string num;
public:
	//给姓名赋值
	void setName(string name)
	{
		this->name = name;
		
	}
	void setNum(string num)
	{
		this->num  = num;
	}
	void Show()
	{
		cout << "姓名: " << name << "\t";
		cout << "学号： " << num << endl;
	}

};



int main()
{
	
	//通过圆类创建具体的圆 （对象）
	//Circle c1;
	//c1.m_r = 2;
	//double CZ = c1.calculateZC();
	//cout << "圆的周长为：" << CZ << endl;


	//学生类
	Student s1;
	s1.name = "啊哈";
	s1.num = "123";
	s1.Show();
	Student s2;
	s2.setName("哎呦喂");
	s2.setNum("456");
	s2.Show();
	


	system("pause");
	return 0;
}