#include<iostream>
using namespace std;

class Building;

class Girl
{
public:
	Girl();
	void visit();   //��visit����Building�е�˽�г�Ա

	void visit2();   //��visit�����Է���Building�е�˽�г�Ա
	
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
Girl::Girl()
{
	building = new Building;
}
void Girl::visit()
{
	cout << "Visit���ڷ���" << building->m_SittingRoom << endl;
	cout << "Visit���ڷ���" << building->m_BedRoom << endl;
}

void Girl::visit2()
{
	cout << "Visit���ڷ���" << building->m_SittingRoom << endl;
	//cout << "Visit���ڷ���" << building->m_BedRoom << endl;
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