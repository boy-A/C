#include<iostream>
using namespace std;

//������Ԫ
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
//����д��Ա����


Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
class Girl
{
public:
	Girl();

public:
	void visit(); // �ιۺ���  ����Building�е�����
	Building* building;

private:

};


Girl::Girl()
{
	//����һ��������
	building = new Building;
}
void Girl::visit()
{
	cout << "���������ڷ���" << building->m_SittingRoom << endl;
	cout << "���������ڷ���" << building->m_BedRoom << endl;
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