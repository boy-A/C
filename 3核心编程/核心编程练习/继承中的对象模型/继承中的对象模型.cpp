#include<iostream>
using namespace std;


//�̳��еĶ���ģ��
class  Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class  Son:public Base
{
public:
	int m_D;



};


//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷���cpp�ļ������̷���
//��ת�ļ�·��   cd �ļ�·��
//�鿴����
// cl /d1 reportSingleClassLayout���� �ļ���

void test()
{
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳�
	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ�Ǳ��̳���
	cout << "size of son " << sizeof(Son) << endl;
}

int main()
{

	test();
	system("pause");
	return 0;
}