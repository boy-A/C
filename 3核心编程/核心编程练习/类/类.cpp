#include<iostream>
using namespace std;
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
class Circle
{
	//����Ȩ��
public:

	//����
	int m_r;

	//��Ϊ
	//��ȡ�ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}


};

//ѧ����
class Student
{
public:
	string name;
	string num;
public:
	//��������ֵ
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
		cout << "����: " << name << "\t";
		cout << "ѧ�ţ� " << num << endl;
	}

};



int main()
{
	
	//ͨ��Բ�ഴ�������Բ ������
	//Circle c1;
	//c1.m_r = 2;
	//double CZ = c1.calculateZC();
	//cout << "Բ���ܳ�Ϊ��" << CZ << endl;


	//ѧ����
	Student s1;
	s1.name = "����";
	s1.num = "123";
	s1.Show();
	Student s2;
	s2.setName("����ι");
	s2.setNum("456");
	s2.Show();
	


	system("pause");
	return 0;
}