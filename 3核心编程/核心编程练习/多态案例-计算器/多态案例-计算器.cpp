#include<iostream>
using namespace std;
#include<string>

//�����������ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//��̬���ŵ㣺
//1. ������֯�ṹ����
//2. �ɶ���ǿ
//3. ����ǰ�ںͺ��ڵ���չ�Լ�ά��

//��ͨд��
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
		//����ʵ������ �ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п���  ���޸Ľ��йر�
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

//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
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
	//��̬ʹ������
	//����ָ���������ָ���������
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
