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

// ��������������ֵ
//1. ��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;  //�ֲ��������������е�ջ��
	return a;
}
// ��������������ֵ
//2. ���������ÿ�����Ϊ��ֵ
int& test02()
{
	// ��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	//����ִ����ϲŻ��ͷſռ�
	static int a = 10;  
	return a;
}


//���õı���--��C++�ڲ�ʵ����һ��ָ�볣��
//���������ã�ת��Ϊint* const ref = &a;
void func03(int& ref)
{
	ref = 100;   //ref�����ã�ת��Ϊ*ref = 100��
}


//��ӡ���ݺ�ʽ
void showValue(const int& val)
{
	//val = 1000;
	cout << "val =  " << val << endl;
}



int main()
{
	
	//fun();
	//fun2();

	//int a = 10;
	//int b = 20;
	//mySwap01(a, b);
	//mySwap02(&a, &b);
	//mySwap03(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//test01���ʵ��
	//int &ref = test01();
	//cout << "����������ֵ ref =  " << ref << endl;
	//cout << "����������ֵ ref =  " << ref << endl;

	//test02���ʵ��
	//int& ref2 = test02();
	//cout << "����������ֵ ref2 =  " << ref2 << endl;
	//cout << "����������ֵ ref2 =  " << ref2 << endl;
	//test02() = 1000;  //��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ���������¸�ֵ��
	//cout << "����������ֵ ref2 =  " << ref2 << endl;
	//cout << "����������ֵ ref2 =  " << ref2 << endl;


	//���õı������ʵ��
	//int a = 10;
	//�Զ�ת��Ϊ int* const ref= &a�� ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ�
	//int& ref = a;
	//ref = 20; // �ڲ�����ref�����ã��Զ�ת���� * ref = 20 �� 
	//cout << "a = " << a << endl;
	//cout << "ref = " << ref << endl;


	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	//int& ref = 10;   //����д���ǲ��Ϸ���
	//����const֮�� �������������޸�Ϊ  
	//int temp =10��const int  & ref= 10;
	
	const int& ref = 10;  //���ñ�����һ��Ϸ����ڴ�ռ�
	//ref = 20;  //����const֮���Ϊֻ�����������޸�

	int a = 10;
	showValue(a);



	system("pause");
	return 0;
}