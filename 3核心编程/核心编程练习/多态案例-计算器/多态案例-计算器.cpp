#include<iostream>
using namespace std;
#include<string>

//案例描述：分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//多态的优点：
//1. 代码组织结构清晰
//2. 可读性强
//3. 利于前期和后期的扩展以及维护

//普通写法
class Calculator
{
public:
	int getResult(string opr)
	{
		if (opr == "+")
		{
			return m_Num1 + m_Num2;
		}
			
		else if(opr == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (opr == "*")
		{
			return m_Num1 * m_Num2;
		}
		//在真实开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放  对修改进行关闭
	}

	int m_Num1;
	int m_Num2;



};

void test()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalcilator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;

};
class AddCalculator:public AbstractCalcilator
{
public:
	 int getResult()
	{
		return  m_Num1+m_Num2;
	}

};
class SubCalculator :public AbstractCalcilator
{
public:
	int getResult()
	{
		return  m_Num1 - m_Num2;
	}

};
class MulCalculator :public AbstractCalcilator
{
public:
	int getResult()
	{
		return  m_Num1 * m_Num2;
	}

};

void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象
	AbstractCalcilator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

}
int main()
{
	//test();
	test02();
	system("pause");
	return 0;
}
