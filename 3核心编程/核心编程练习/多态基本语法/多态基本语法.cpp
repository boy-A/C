#include<iostream>
using namespace std;


class Animal
{
public:
	virtual void speek()
	{
		cout << "������˵��" << endl;
	}

};
class Cat:public Animal
{
public:
	//��д  ��������ֵ���� ������ �����б� ��ȫ��ͬ
	//������дʱ��virtual�ؼ��ֿ�д�ɲ�д  ������virtualҪд

	void speek()
	{
		cout << "Сè��˵��" << endl;
	}


};

//ִ��˵������
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ���ǲ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1. �м̳й�ϵ
//2. ������д������麯��

//��̬��̬��ʹ��
//�����ָ��������� ִ���������
void doSpeek(Animal& animal)   // Animal &animal = cat
{
	animal.speek();
}

void test()
{
	Cat cat;
	doSpeek(cat);
}


int main()
{
	test();
	system("pause");
	return 0;
}