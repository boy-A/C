#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"
//class Point
//{
//public:
//	//����X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡX
//	int getX()
//	{
//		return m_X;
//
//	}
//
//	//����Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡY
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};


//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//
//	}
//	//����Բ��
//	void setcenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getcenter()
//	{
//		return m_Center;
//	}
//
//
//private:
//	int m_R;
//	Point m_Center;
//};




void Com(Circle c, Point p)
{
	int dis = (c.getcenter().getX() - p.getX()) * (c.getcenter().getX() - p.getX()) +
		(c.getcenter().getY() - p.getY()) * (c.getcenter().getY() - p.getY());
	int r = c.getR() * c.getR();
	if (dis == r)
		cout << "��Բ��" << endl;
	else if (dis > r)
		cout << "��Բ��" << endl;
	else
		cout << "��Բ��" << endl;
}

int main()
{
	//ʵ����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setcenter(center);


	//ʵ������
	Point p;
	p.setX(10);
	p.setY(10);


	//�Ƚ�Բ�͵��λ��
	Com(c, p);
	system("pause");
	return 0;

}