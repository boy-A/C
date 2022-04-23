#include<iostream>
using namespace std;

//类做友元
//class Building;
class Building
{
	 friend class Girl;
public:
	Building();


public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};
//类外写成员函数


Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
class Girl
{
public:
	Girl();

public:
	void visit(); // 参观函数  访问Building中的属性
	Building* building;

private:

};


Girl::Girl()
{
	//创建一个建筑物
	building = new Building;
}
void Girl::visit()
{
	cout << "好朋友正在访问" << building->m_SittingRoom << endl;
	cout << "好朋友正在访问" << building->m_BedRoom << endl;
}





void test()
{
	Girl girl;
	girl.visit();
}


int main()
{
	test();
	system("pause");
	return 0;
}