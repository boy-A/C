#include<iostream>
using namespace std;
#include<string>

class Cube 
{
private:
	double a;
	double b;
	double c;

public:
	void setA(double a ) 
	{
		this->a = a;
	}
	double getA()
	{
		return a;
	}
	void setB(double b)
	{
		 this->b = b;
	}
	double getB()
	{
		return b;
	}
	void setC(double c)
	{
		 this->c = c;
	}
	double getC()
	{
		return c;
	}
public:
	double S()
	{
		return 2 * (a * b + a * c + b * c);
	}
	double V()
	{
		return  a * b * c;
	}
	void com(Cube c1)  //只传一个参数就可以了
	{
		if (c1.a == a  && c1.b == b && c1.c == c)
			cout << "相等的" << endl;
		else
			cout << "不相等" << endl;
		
	}
	


};


void COM(Cube c1, Cube c2)
{
	if(c1.getA() == c2.getA() && c1.getB() == c2.getB() && c1.getC()== c2.getC() )
		cout << "相等的" << endl;
	else
		cout << "不相等" << endl;
}

int main()
{
	Cube c1;
	c1.setA(1);
	c1.setB(2);
	c1.setC(3);
	Cube c2;
	c2.setA(1);
	c2.setB(2);
	c2.setC(3);
	c1.com(c2);
	COM(c1, c2);
	cout << "面积为：" << c1.S() << endl;
	cout << "体积为：" << c1.V() << endl;



	system("pause");
	return 0;
}