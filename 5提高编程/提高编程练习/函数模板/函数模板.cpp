#include<iostream>
using namespace std;

//������������
template<typename T>
void Swap(T& a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a=10;
	int b=20;
	//����ģ��ʵ�����ݽ���
	//1. �Զ������Ƶ�--
	//Swap(a, b);
	//2. ��ʾָ������
	Swap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	 
	//ע������
	//1. �����Ƶ���һ�µ���������T�ſ���ʹ��
	//2. ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��


}
int main()
{
	test();
	system("pause");
	return 0;

}