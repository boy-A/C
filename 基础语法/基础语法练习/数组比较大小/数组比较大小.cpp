#include<iostream>
using namespace std;
 
int main()
{
	int arr[] = { 300,350,200,400,500 };
	int max =0;
	
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;


	system("pause");
	return 0;

}
