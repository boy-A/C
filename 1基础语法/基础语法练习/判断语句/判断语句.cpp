#include<iostream>
using namespace std;

int  main() 
{
	//�ж��������ݴ�С
	//1. ����3������
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;


	//2. ������������ֵ
	cout << "����1��" << endl;
	cin >> num1;
	cout << "����2��" << endl;
	cin >> num2;
	cout << "����3��" << endl;
	cin >> num3;

	//3. �Ƚϴ�С
	if (num1 > num2)
	{
		if (num1 > num3)
			cout << "num1���" << endl;
		else
		
			cout << "num3���" << endl;
		

			
	}
	else
	{
		if (num2 > num3)
			cout << "nun2���" << endl;
		else
			cout << "num3���" << endl;
	}



	system("pause");
	return 0;
}
