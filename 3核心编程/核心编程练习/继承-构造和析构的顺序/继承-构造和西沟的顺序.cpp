#include<iostream>
using namespace std;


//�̳��й����������˳��
class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}

private:

}; 
class Son:public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}


private:

};

void test()
{
	//Base b;
	//�̳��еĹ��������˳��
	//�ȹ��츸�࣬�ڹ������࣬������˳���빹���෴
	Son s;
}

int main()
{
	test();
	system("pause");
	return 0;
}