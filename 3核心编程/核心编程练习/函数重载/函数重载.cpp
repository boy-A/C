#include<iostream>
using namespace std;
 

//��������--��ߺ���������
//�������ص�����������
//1. ������ͬһ����������
//2. ��������ͬ
//3. �����������Ͳ�ͬ��������ͬ����˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int  a )
{
	cout << "func�ĵ���!!" << endl;
}


//�������ص�ע������
//1. ������Ϊ��������
void func01(int &a)
{
	cout << "func01(int a)����" << endl;
}

void func01(const int &a)
{
	cout << "func01(const int a)����" << endl;
}

//2. ����������������Ĭ�ϲ���
// �������ؾ�����ʹ��Ĭ�ϲ��������������
void func02(int  a, int b=10)
{
	cout << "func02(int  a, int b)�ĵ���" << endl;
}

void func02(int  a)
{
	cout << "func02(int  a)�ĵ���" << endl;
}
int main()
{
	//���������������
	//func();
	//func(10);

	//��������ע�������������-��������������
	//int a = 10;
	//func01(a);
	//func01(10);

	//��������ע�������������-Ĭ�ϲ�������
	//func02(10);  //c��ʱ����func02����������ƥ�䣬ϵͳ�޷��жϵ�����һ������������
	system("pause");
	return 0;
}