#include<iostream>
using namespace std;


//1. new �Ļ����﷨

int* fun()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�ͷŶ������ݣ���Ҫʹ��delete
	delete  p; 
	//cout << *p << endl;    // �ڴ��Ѿ��ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

// 2. �ڶ�������new�������顣
void test02()
{
	int *arr = new int[10];   // ������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;  //�����鸳ֵ
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	//�ͷ������ʱ�� Ҫ��[]�ſ���
	delete[] arr;
}
int main()
{

	test01();
	test02();
	system("pause");
	return 0;
}