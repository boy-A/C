#include<iostream>
using namespace std;
#include<string>
class  Building
{
	//Boy全局函数是Building的友元函数，可以访问Building中的私有成员
	friend void Boy(Building& boy);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";

	}



public:
	string m_SittingRoom;

private:
	string m_BedRoom;

};


//全局函数
void Boy(Building&boy)
{
	cout << "好朋友全局函数正在访问：" << boy.m_SittingRoom << endl;
	cout << "好朋友全局函数正在访问：" << boy.m_BedRoom << endl;

}
void test01()
{
	Building buliding;
	Boy(buliding);
}


int main1()
{
	test01();
	system("pause");
	return 0;
}