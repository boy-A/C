#include<iostream>
using namespace std;

//1. ���캯���ķ��༰Ӧ��
//����
// ���ղ�������   �вι�����޲ι���(Ĭ�Ϲ���)
//�������ͷ���   ��ͨ���� �� ��������
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person�޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person�вι��캯��" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person�������캯��" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������" << endl;
	}

	int age;

};



//����
void test01()
{
	//1. ���ŷ�
	Person p1; // Ĭ�Ϲ��캯������
	//Person p1();
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ�ӣ���
	//��Ϊ����ӣ���������������Ϊ����һ������������
	Person p2(10); //�вι��캯��
	Person p3(p2); //�������캯��

	//
	cout << "p2�����䣺" << p2.age<< endl;
	cout << "p3�����䣺" << p3.age << endl;
	//2. ��ʾ��
	Person p1;
	Person p2 = Person(10); //�вι���
	Person p3 = Person(p2); // ��������
	Person(10); //���������ص㣺��ǰִ�н�����ϵͳ������������������
	//ע�⣺
	// Person(p3);
	// ��Ҫ���ÿ������캯�� ��ʼ����������  ���������Person(p3); ���ΪPerson p3; 
	//3. ��ʽת����
	Person p4 = 10;  //�൱�� Person p4 = Person(10);  �вι���
	Person p5 = p4;  //��������
}

int main1()
{
	test01();
	system("pause");
	return 0;
}