#include<iostream>
using namespace std;

//�������������
//�Զ�������

class MyInt
{
 friend ostream & operator<<(ostream& cout, MyInt myint);
public:

	MyInt()
	{ 
		m_Num = 0;
	}

	//����++��ǰ�ã������  ����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInt& operator++()
	{
		m_Num++;
		return *this;
	}
	//����++�����ã������    ����������Ϊ��һֱ��һ�����ݽ��е�������
	//void operator++(int) int����ռλ������������������ǰ�úͺ���
	MyInt operator++(int)
	{
		// �� ��¼��ǰ���
		MyInt tem = *this;
		//�� ����
		m_Num++;
		//��󷵻ؼ�¼���
		return tem;
	}
private:
	int m_Num;
};



// �������������
ostream& operator<<(ostream& cout, MyInt myint)
{
	cout << myint.m_Num << endl;
	return cout;
}

void test01()
{
	MyInt myint;
	cout << ++myint << endl;
}

void test02()
{
	MyInt myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;

}
