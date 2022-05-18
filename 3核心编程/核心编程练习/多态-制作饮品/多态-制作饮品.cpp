#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;

	//导入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
	
};

class Coffee :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮咖啡水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//导入杯中
	virtual void PourInCup()
	{
		cout << "把咖啡倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入咖啡伴侣" << endl;
	}
};

class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮茶水" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶" << endl;
	}

	//导入杯中
	virtual void PourInCup()
	{
		cout << "把茶倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入柠檬" << endl;
	}
};

void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;
}
void test()
{
	//制作咖啡 
	doWork(new Coffee);
	//制作茶
	doWork(new Tea);
}

int main()
{
	test();
	system("pause");
	return 0;
}