#include<iostream>
#include<string>
using namespace std;

//��һ�ֽ��������ֱ�Ӱ���Դ�ļ�
#include"Person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
//#include"Person.hpp"


//��ģ���Ա�������ļ���д�����������Լ��������
//��ģ���г�Ա��������ʱ�����ڵ���ʱ�����·��ļ���дʱ���Ӳ���
// �������1��ֱ�Ӱ���.cpp�ļ�
// �������2����������ʵ��д��ͬһ���ļ���,�����ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "name:" << this->m_Name << " " << "age:" << this->m_Age << endl;
//}

void test()
{
	Person<string, int>p("Jom", 15);
	p.showPerson();
}

int main()
{
	test();
	system("pause");
	return 0;
}