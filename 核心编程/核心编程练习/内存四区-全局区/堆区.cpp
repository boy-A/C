#include<iostream>
using namespace std;

int* func()
{
	// ����new�ؼ���  �����ݿ��ٵ�����
	// ָ��  ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ǵ���ڶ���
	int* p = new int(10);
	return p;
}
int main3()
{

	// �ڶ����������� --ʹ�ùؼ���new
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}