#include<iostream>
using namespace std;


//��ͨ�����뺯��ģ��ĵ��ù���
//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
// 2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
// 3. ����ģ��Ҳ���Է�������
// 4. �������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��


void Print(int a, int b)
{
	cout << "������ͨ����" << endl;
}
template<typename T>
void Print(T a, T b)
{
	cout << "���ú���ģ��" << endl;
}
template<typename T>
void Print(T a, T b,T c)
{
	cout << "�������صĺ���ģ��" << endl;
}

void test()
{
	int a = 0;
	int b = 0;
	//�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
	//Print(a, b);   

	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	//Print<>(a, b);

	//����ģ��Ҳ���Է�������
	//Print(a, b, 100);
	
	//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	Print(c1, c2);
}
int main()

{

	test();
	system("pause");
	return 0;
}