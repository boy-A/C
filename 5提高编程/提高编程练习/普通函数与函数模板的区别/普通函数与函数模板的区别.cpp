#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ�������
//1. ��ͨ�������ÿ��Է�����ʽ����ת��
//2. ����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3. ����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��


template<typename T>
int  Add(T a, T b)
{
	return a + b;

}
void test()
{
	int a = 10;
	int  b = 20;
	char c = 'c';
	Add(a, b);
	//�Զ������Ƶ� ������ʽ����ת��
	//Add(a, c);
	int l= Add<char>(a, c);
	cout << l << endl;

}
int main()
{
	test();
	system("pause");
	return 0;
}