#include<iostream>
using namespace std;
#include<ctime>

int main() 
{
	//�����������ӣ����������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1. ϵͳ����1-100�����
	int num = rand() % 100 + 1;   //rand()%100  ���ɵ���0-99�������
	//cout << "�������" << num  << endl;
	
	int val = 0;


	while (val != num)
	{
		
		//2. ��ҽ��в²�
		
		cout << "���������²�����ݣ�" << endl;
		cin >> val;
		//3. �ж���ҵĲ²�
			  // �¶�  �˳���Ϸ
			  // �´�  ��ʾ������  ������С  ���ز���2

		if (val > num)
			cout << "�²����" << endl;
		else if (val < num)
			cout << "�²��С" << endl;
		else
		{
			cout << "�¶���" << endl;
			break;
		}	
	}
	system("pause");
	return 0;
}