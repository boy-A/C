#include<iostream>
using namespace std;
//继承方式
//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
class Son1:public Base1
{
public:
	void func()
	{
		m_A = 10; //父类中的公共权限 到子类中仍然是公共权限
		m_A = 20; //父类中的保护权限  到子类中仍然是保护权限
		//m_C = 30;  //父类中的私有权限  到子类中访问不到
	}
	
};


//保护继承
class  Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son2:protected Base2
{
	void func()
	{
		m_A = 100;
		m_B = 100;

	}


};


void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;  //到son1中  m_B是保护权限  类外无法访问
	
}

void test02()
{
	Son2 s2;
	//s2.m_A = 10;  //在Son2中 m_A变为保护权限  类外不能访问
	//s2.m_B = 10;  //在Son2中 m_B变为保护权限  类外不能访问
	
}



int main()
{
	system("pause");
	return 0;
}