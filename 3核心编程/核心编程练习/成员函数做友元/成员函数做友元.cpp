#include<iostream>
using namespace std;

class Building;

class Girl
{
public:
	Girl();
	void visit();   //让visit访问Building中的私有成员

	void visit2();   //让visit不可以访问Building中的私有成员
	
	Building* building;





};

class Building
{
	friend void  Girl::visit();
public:
	string m_SittingRoom;
public:
	Building();
private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
Girl::Girl()
{
	building = new Building;
}
void Girl::visit()
{
	cout << "Visit正在访问" << building->m_SittingRoom << endl;
	cout << "Visit正在访问" << building->m_BedRoom << endl;
}

void Girl::visit2()
{
	cout << "Visit正在访问" << building->m_SittingRoom << endl;
	//cout << "Visit正在访问" << building->m_BedRoom << endl;
}

void test01()
{
	Girl gg;
	gg.visit();
	gg.visit2();
}
int main()
{

	test01();
	system("pause");
	return 0;

}