#include<iostream>
#include<string>
using namespace std;

//��ģ��ʵ�������Ķ����������εķ�ʽ
//1. ָ����������� --ֱ����ʾ�������������
//2. ����ģ�廯 --�������еĲ�����Ϊģ����д���
//3. ������ģ�廯 --������������� ģ�廯���д���

//��ģ��
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;


};

//1.ָ����������
void printPerson1(Person<string, int> &p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int>p1("ha", 15);
	//p1.showPerson();
	printPerson1(p1);
}

//2.����ģ�廯
template<class T1,class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	//�鿴T1����������
	cout << "T1�����ͣ�" << typeid(T1).name() << endl;   
	cout << "T2�����ͣ�" << typeid(T2).name()<< endl;
}
void test02()
{
	Person<string, int>p2("�ڶ���", 13);
	printPerson2(p2);
}

//3. ��������ģ�廯
template<class T>
void printPerson3(T & p)
{
	p.showPerson();
	cout << "T�����ͣ�" << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int>p3("����",10);
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;

}