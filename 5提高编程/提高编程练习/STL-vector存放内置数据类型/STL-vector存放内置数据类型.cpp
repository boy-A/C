#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//vector�������������������

void myPrint(int val)
{
	cout << val << endl;
}


void test01()
{
	//����һ��vector����������
	vector<int> v;
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	//ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();   //��ʼ��������ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();  //������������ָ�����������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}


	//�ڶ��ֱ�������
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}


	//�����б�������
	for_each(v.begin(), v.end(), myPrint);  //�ص�����
}
int main()
{
	test01();
	system("pause");
	return 0;
}