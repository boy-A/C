#include<iostream>
using namespace std;

int main() 
{
	int sum[3] = {0,0,0};
	int scores[3][3] = { 100 ,100 ,100 ,90 , 50 , 100 , 60 , 70 , 80 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i] = sum[i] + scores[i][j];

		}
	}
	for (int k = 0; k < 3; k++)
		cout << sum[k] << " ";
	system("pause");
	return 0;
}