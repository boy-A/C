#include<iostream>
using namespace std;


int main()
{

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "����ǰ��" << " ";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;




	//ð������
	for (int j = 0; j < 9 - 1; j++)
	{
		//�ڲ�ѭ���Ա�  ���� = Ԫ�ظ��� - ��ǰ���� - 1
		for (int k = 0; k < 9 - j - 1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}


		}
	}

		cout << "�����" << " ";

		for (int m = 0; m < 9; m++)
		{
			cout << arr[m] << " ";
		}
		cout << endl;

		system("pause");
		return 0;

	}
