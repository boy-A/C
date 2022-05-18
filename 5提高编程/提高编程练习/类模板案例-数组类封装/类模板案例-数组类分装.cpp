#include<iostream>
#include<string>
using namespace std;
#include"MyArray.hpp"

//����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//1. ���Զ��������������Լ��Զ����������͵����ݽ��д洢
//2. �������е����ݴ洢������
//3. ���캯���п��Դ������������
//4. �ṩ��Ӧ�Ŀ������캯���Լ�operator= ��ֹǳ��������
//5. �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//6. ����ͨ���±�ķ�ʽ���������е�Ԫ��
//7. ���Ի�ȡ�����е�ǰԪ�صĸ��������������

void PrintIntArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}


void test01()
{
	MyArray<int>arr1(5);
	//MyArray<int>arr2(arr1);
	//MyArray<int> arr3(100);
	//arr3 = arr1;

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	PrintIntArray(arr1);

	cout << "arr1��������" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�С��" << arr1.getSize()<< endl;

	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ�����" << endl;
	PrintIntArray(arr2);
	arr2.Pop_Back();
	cout << "arr2��������" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;




}

//�����Զ�����������
class Person
{
public:
	Person(){}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}
	string m_Name;
	int m_Age;


};
void PrintPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;
	}

}

void test02()
{
	MyArray<Person>arrz(10);
	Person p1("һ", 15);
	Person p2("��", 41);
	Person p3("��", 24);
	Person p4("��", 33);
	//�����ݲ��뵽������
	arrz.Push_Back(p1);
	arrz.Push_Back(p2);
	arrz.Push_Back(p3);
	arrz.Push_Back(p4);
	//��ӡ����
	PrintPersonArray(arrz);
	//�������
	cout << "arrz��������" << arrz.getCapacity() << endl;
	//�����С
	cout << "arrz�Ĵ�С��" << arrz.getSize() << endl;
	

}
int main()
{
	test02();
	system("pause");
	return 0;
}