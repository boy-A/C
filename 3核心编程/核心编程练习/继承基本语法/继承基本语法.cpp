#include<iostream>
using namespace std;

class BasePage
{
public:
	void header()
	{
		cout << "��¼  ע��" << endl;
	}
	void foooter()
	{
		cout << "��ϵ��ʽ  ��ַ" << endl;
	}
	void left()
	{
		cout << "������" << endl;
	}


};

class Java:public BasePage
{
public:
	void java()
	{
		cout << "java��Ƶ" << endl;
	}
};
class Python :public BasePage
{
public:
	void pathon()
	{
		cout << "pathon��Ƶ" << endl;
	}
};
class CPP :public BasePage
{
public:
	void cpp()
	{
		cout << "cpp��Ƶ" << endl;
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