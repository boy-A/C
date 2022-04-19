#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;

	for (; start < end; )
	{
		int tem = arr[start];
		arr[start] = arr[end];
		arr[end] = tem;
		end--;
		start++;

	}


	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		cout << arr[i] << endl;
		

	system("pause");
	return 0;
}