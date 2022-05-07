#include"head.h"

int pop(int arr[])
{
	int temp =0 ;
	for (int i = 0 ;i < 9 ; i++)
		for (int j =0 ; j < 10 - i - 1; j++)
		{
			
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	return arr[10];
}