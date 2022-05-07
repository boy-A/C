#include<iostream>
using namespace std;

class BasePage
{
public:
	void header()
	{
		cout << "登录  注册" << endl;
	}
	void foooter()
	{
		cout << "联系方式  地址" << endl;
	}
	void left()
	{
		cout << "导航条" << endl;
	}


};

class Java:public BasePage
{
public:
	void java()
	{
		cout << "java视频" << endl;
	}
};
class Python :public BasePage
{
public:
	void pathon()
	{
		cout << "pathon视频" << endl;
	}
};
class CPP :public BasePage
{
public:
	void cpp()
	{
		cout << "cpp视频" << endl;
	}
};

void test()
{
	Java ja;
	ja.header();
	ja.foooter();
	ja.left();
	ja.java();
	cout << "****************************" << endl;
	Python py;
	py.header();
	py.foooter();
	py.left();
	py.pathon();
	cout << "****************************" << endl;
	CPP cpp;
	cpp.header();
	cpp.foooter();
	cpp.left();
	cpp.cpp();
	cout << "****************************" << endl;
	
}

int main()
{
	test();
	system("pause");
	return 0;
}