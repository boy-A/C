#include<iostream>
using namespace std;


//继承中的对象模型
class  Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class  Son:public Base
{
public:
	int m_D;



};


//利用开发人员命令提示工具查看对象模型
//跳转盘符（cpp文件所在盘符）
//挑转文件路径   cd 文件路径
//查看命令
// cl /d1 reportSingleClassLayout类名 文件名

void test()
{
	//16
	//父类中所有非静态成员属性都会被子类继承
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到的，但是确实是被继承了
	cout << "size of son " << sizeof(Son) << endl;
}

int main()
{

	test();
	system("pause");
	return 0;
}