#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
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
	//��ˮ
	virtual void Boil()
	{
		cout << "�󿧷�ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "�ѿ��ȵ��뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "���뿧�Ȱ���" << endl;
	}
};

class Tea :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "���ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "�Ѳ赹�뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "��������" << endl;
	}
};

void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;
}
void test()
{
	//�������� 
	doWork(new Coffee);
	//������
	doWork(new Tea);
}

int main()
{
	test();
	system("pause");
	return 0;
}