#include<iostream>
using namespace std;

//��ģ���г�Ա��������ͨ���г�Ա��������ʱ����ȴ��
//1.��ͨ���г�Ա����һ��ʼ�Ϳ��Դ���
//2.��ģ���г�Ա�����ڵ���ʱ�Ŵ���

class Person1
{
public:
	void showPerso1()
	{
		cout << "Person1 show" << endl;
	}

};

class Person2
{
public:
	void showPerso2()
	{
		cout << "Person2 show" << endl;
	}

};

template<class T>
class MyClass
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	void fun1()
	{
		obj.showPerson1();
	}
	void fun2()
	{
		obj.showPerson2();
	}



};

void test()
{
	MyClass<Person2>m;
	//m.fun1();
	m.fun2();

}


int main()
{
	system("pause");
	return 0;
}