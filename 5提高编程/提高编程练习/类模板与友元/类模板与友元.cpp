#include<iostream>
#include<string>
using namespace std;


//��ģ�������Ԫ���������ں�����ʵ��
//ȫ�ֺ�������ʵ��--ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1,class T2>
class Person;

//����ʵ��
//��Ҫ�ñ�����֪��PrintPerson2�Ĵ��ڣ�����Ҫ�ᵽǰ����д
template<class T1, class T2>
void PrintPerson2(Person<T1, T2> p)
{
	cout << "ȫ�ֺ�������ʵ��" << endl;
	cout << "������" << p.m_Name << "  " << "���䣺" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend  void PrintPerson(Person<T1,T2> p)
	{ 
		cout << "������" << p.m_Name << "  " << "���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//��Ҫ�ӿ�ģ������б�
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend  void PrintPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;

	}
private:
	T1 m_Name;
	T2 m_Age;
};


void test()
{
	Person<string, int>p("Tom", 15);
	PrintPerson2(p);
}

int main()
{
	test();
	system("pause");
	return 0;
}