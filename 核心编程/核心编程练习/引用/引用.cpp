#include<iostream>
using namespace std;


//���õĻ����﷨
void fun() 
{
	//�������� &���� = ԭ��;
	int a = 10;
	int& b = a;  // ��������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//���õ�ע������
void fun2()
{
	int a = 10;
	// �����ڶ����ʱ������ʼ����
	// int &b; ����
	int& b = a;
	

	//2. �����ڳ�ʼ���󲻿��Ըı�
	int c = 20;
	b = c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

}

//��������������
//1. ֵ����--�βθı䣬����ʵ�β���
void mySwap01(int a, int b)
{
	int temp = a;
	a = b; 
	b = temp;
	cout << "Swap01 a = " << a << endl;
	cout << "Swap01 b = " << b << endl;
}
//2. ��ַ���� -- �βλ�����ʵ�Σ�ʵ�λ�ı�
void mySwap02(int *a ,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "mySwap02 a = " << *a << endl;
	cout << "mySwap02 b = " << *b << endl;
}
//3. ���ô���--�βλ�����ʵ�Σ�ʵ�λ�ı�
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap03 a = " << a << endl;
	cout << "mySwap03 b = " << b << endl;
}
int main()
{
	
	//fun();
	//fun2();

	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//mySwap02(&a, &b);
	mySwap03(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}