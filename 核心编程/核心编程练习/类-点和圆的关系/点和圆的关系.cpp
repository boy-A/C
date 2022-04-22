#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"
//class Point
//{
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int getX()
//	{
//		return m_X;
//
//	}
//
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
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
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//
//	}
//	//设置圆心
//	void setcenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
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
		cout << "在圆上" << endl;
	else if (dis > r)
		cout << "在圆外" << endl;
	else
		cout << "在圆内" << endl;
}

int main()
{
	//实例化圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setcenter(center);


	//实例化点
	Point p;
	p.setX(10);
	p.setY(10);


	//比较圆和点的位置
	Com(c, p);
	system("pause");
	return 0;

}