#include<iostream>
using namespace std;


int main()
{

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前：" << " ";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << endl;




	//冒泡排序
	for (int j = 0; j < 9 - 1; j++)
	{
		//内层循环对比  次数 = 元素个数 - 当前轮数 - 1
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

		cout << "排序后：" << " ";

		for (int m = 0; m < 9; m++)
		{
			cout << arr[m] << " ";
		}
		cout << endl;

		system("pause");
		return 0;

	}
