#pragma once
#include<iostream>
using namespace std;
#include"point.h"

class Circle
{
public:
	//���ð뾶
	void setR(int r);

	//��ȡ�뾶
	int getR();

	//����Բ��
	void setcenter(Point center);

	//��ȡԲ��
	Point getcenter();



private:
	int m_R;
	Point m_Center;
};