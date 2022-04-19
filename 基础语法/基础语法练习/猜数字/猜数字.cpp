#include<iostream>
using namespace std;
#include<ctime>

int main() 
{
	//添加随机数种子，作用是利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1. 系统生成1-100随机数
	int num = rand() % 100 + 1;   //rand()%100  生成的是0-99的随机数
	//cout << "随机数：" << num  << endl;
	
	int val = 0;


	while (val != num)
	{
		
		//2. 玩家进行猜测
		
		cout << "请输入您猜测的数据：" << endl;
		cin >> val;
		//3. 判断玩家的猜测
			  // 猜对  退出游戏
			  // 猜错  提示错误结果  过大或过小  返回步骤2

		if (val > num)
			cout << "猜测过大" << endl;
		else if (val < num)
			cout << "猜测过小" << endl;
		else
		{
			cout << "猜对了" << endl;
			break;
		}	
	}
	system("pause");
	return 0;
}