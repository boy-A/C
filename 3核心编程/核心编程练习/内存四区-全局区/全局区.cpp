#include<iostream>
#include<string>
using namespace std;



//创建全局变量
int g_a = 10;
int g_b = 10;

//const
//const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;


int main1()
{
	//全局区 
	//全局区域存放全局变量、静态变量、常量


	//创建普通的局部变量
	int a = 10;
	int b = 10;


	// 创建静态变量
	static int s_a = 10;
	static int s_b = 10;


	//局部常量
	//字符串常量
	
	//const
	// const修饰的局部变量
	const int c_l_a = 10;
	const int c_l_b = 10;

		
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;
	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;
	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;
	cout << "字符串常量str地址：" << (int)&("HELLO WORLD")<< endl;
	cout << "const修饰的全局变量地址：" << (int)&c_g_a << endl;
	cout << "const修饰的全局变量地址：" << (int)&c_g_b << endl;
	cout << "const修饰的局部变量地址：" << (int)&c_l_a << endl;
	cout << "const修饰的局部变量地址：" << (int)&c_l_b << endl;


	system("pause");
	return 0;
}