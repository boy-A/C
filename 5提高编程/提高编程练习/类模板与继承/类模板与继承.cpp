#include<iostream>
using namespace std;

//����ģ�������̳�ʱ����Ҫע��ĵ�
//1. ������̳еĸ�����һ����ģ��ʱ��������������ʱ����Ҫָ���������е�T������
//2. �����ָ�����༭���޷�����������ڴ�
//3. ��������ָ����������T�����ͣ�����Ҳ��Ҫ�����ģ��

template<class T>
class Base
{
public:

	T m;
};

//���󣬱���֪��������T�����ͣ����ܼ̳и�����
//class Son :public Base   
//{
//};


//ֱ��ָ�����������
class Son :public Base<int>     
{
	
};

//���Ҫ���̳и����е�T���ͣ�����Ҳ��Ҫ��Ϊģ��
template<class T1,class T2>
class Son2:public Base<T2>
{
public:
	Son2()
	{

		cout << "T1���������ͣ�" << typeid(T1).name() << endl;
		cout << "T2���������ͣ�" << typeid(T2).name() << endl;

	}
	T1 obj;

};

void test()
{
	Son2<int, char>s2;
}


int main()
{
	test();
	system("pause");
	return 0;
}