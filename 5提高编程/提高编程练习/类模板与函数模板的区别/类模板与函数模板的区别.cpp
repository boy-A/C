#include<iostream>
#include<string>
using namespace std;

//��ģ���뺯��ģ�������
//1.��ģ��û���Զ������Ƶ���ʹ�÷���
//2.��ģ����ģ������б��п�����Ĭ�ϲ���
template<class TypeName, class TypeAge = int >
class Person
{
public:
	Person(TypeName name,TypeAge age  )
	{
		m_name = name;
		m_age = age;

	}

	void showPerson()
	{
		cout << "name:" << m_name << endl;
		cout << "age:" << m_age << endl;
	}
	TypeName m_name;
	TypeAge m_age;

};

void test01()
{
	//Person p1("sun", 1);   1.��ģ��û���Զ������Ƶ���ʹ�÷���
	Person<string,int>p1("sun", 18);
	p1.showPerson();

}
void test02()
{
	//2.��ģ����ģ������б��п�����Ĭ�ϲ���
	Person<string> p2("A", 15);   //��Ϊ��ģ������Ĭ�ϲ�������������ʡ��int���͵�ָ��
	p2.showPerson();
}
int main()
{
	test02();
	system("pause");
	return 0;
}