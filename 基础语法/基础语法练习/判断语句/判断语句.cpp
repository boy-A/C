#include<iostream>
using namespace std;

int  main() 
{
	//判断三个数据大小
	//1. 创建3个变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;


	//2. 输入三个变数值
	cout << "数据1：" << endl;
	cin >> num1;
	cout << "数据2：" << endl;
	cin >> num2;
	cout << "数据3：" << endl;
	cin >> num3;

	//3. 比较大小
	if (num1 > num2)
	{
		if (num1 > num3)
			cout << "num1最大" << endl;
		else
		
			cout << "num3最大" << endl;
		

			
	}
	else
	{
		if (num2 > num3)
			cout << "nun2最大" << endl;
		else
			cout << "num3最大" << endl;
	}



	system("pause");
	return 0;
}
