#include<iostream>
using namespace std;
#include<string>
class  Building
{
	//Boyȫ�ֺ�����Building����Ԫ���������Է���Building�е�˽�г�Ա
	friend void Boy(Building& boy);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";

	}



public:
	string m_SittingRoom;

private:
	string m_BedRoom;

};


//ȫ�ֺ���
void Boy(Building&boy)
{
	cout << "������ȫ�ֺ������ڷ��ʣ�" << boy.m_SittingRoom << endl;
	cout << "������ȫ�ֺ������ڷ��ʣ�" << boy.m_BedRoom << endl;

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