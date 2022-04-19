#include<iostream>
using namespace std;

int main() 
{

	int num = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	while (num < 1000)
	{
		a = num / 100;
		b = (num - a * 100) / 10;
		c = num - a * 100 - b * 10;
		if (num == a * a * a + b * b * b + c * c * c)
		{
			cout << num << endl;
		}
		num++;
			
	

	}
	system("pause");
	return 0;

}