#include<iostream>
using namespace std;
//��Ա���� �� ��Ա���� �ֿ��洢
class Person
{
public:
	int m_A;  //�Ǿ�̬��Ա���� ������Ķ����ϵ�
	static int m_B;  //��̬��Ա����  �������������
	void fun() {}   //�Ǿ�̬��Ա����  �������������
	static void func() {}   // ��̬��Ա����  �������������
	 
};
int Person::m_B = 0;
void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ��� 1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�˿ն���ռ�ڴ��λ��
	//ÿ���ն���ҲҪ��һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}