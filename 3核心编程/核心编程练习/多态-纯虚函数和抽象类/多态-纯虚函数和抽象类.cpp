#include<iostream>
using namespace std;

//���麯���ͳ�����
class  Base
{
public:
	//ֻҪ��һ�����麯����������Ϊ������
	//�������ص�:1. �޷�ʵ��������  2. ��������������Ҫ��д�����еĴ��麯��������Ҳ�ǳ�����
	virtual void func() = 0;  //���麯��
	

};

class Son:public Base
{
public:
	void func()
	{
		cout << "func��������" << endl;
	}

};
void test()
{
	//Base b;  //�����಻��ʵ��������
	//new Base;  //�����಻��ʵ��������

	//Son s;  //���������д�����еĴ��麯���������޷�ʵ��������
	Base* base = new Son;
	base->func();
}


int main()
{
	test();
	system("pause");
	return 0;
}