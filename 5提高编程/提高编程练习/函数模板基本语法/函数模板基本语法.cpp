#include<iostream>
using namespace std;

//����ģ�彻����������

//����һ��ģ�壬���߱�������������н����ŵ�T��һ��ͨ����������
template<typename T>
void Swap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;


	//���ú���ģ�彻��
	//���ַ�ʽʹ�ú���ģ��
	//1. �Զ������Ƶ�
	//Swap(a, b);

	//2. ��ʾָ������
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

int main()
{
	test();
	system("pause");
	return 0;
}