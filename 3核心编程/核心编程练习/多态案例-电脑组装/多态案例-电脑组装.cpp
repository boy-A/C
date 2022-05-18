#include<iostream>
using namespace std;
//CPU
class CPU
{
public:
	virtual void Calculate() = 0;

};
//显卡
class VideoCard
{
public:
	virtual void disPlay() = 0;

};
//内存
class Memory
{
public:
	virtual void storage() = 0;

};

class  Computer
{
public:
	Computer(CPU *cpu,VideoCard *vc,Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void doWork()
	{
		//让零件工作
		m_cpu->Calculate();
		m_vc->disPlay();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;

};

//具体厂商
class IntelCPU:public CPU
{
public:
	void Calculate()
	{
		cout << "Intel厂商的CPU开始计算" << endl;
	}

};
class IntelVideoCard :public VideoCard
{
public:
	void disPlay()
	{
		cout << "Intel厂商的显卡开始工作" << endl;
	}

};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel厂商的内存开始存储" << endl;
	}

};

class LenovoCPU :public CPU
{
public:
	void Calculate()
	{
		cout << "Lenovo厂商的CPU开始计算" << endl;
	}

};
class LenovoVideoCard :public VideoCard
{
public:
	void disPlay()
	{
		cout << "Lenovo厂商的显卡开始工作" << endl;
	}

};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo厂商的内存开始存储" << endl;
	}

};

void test()
{
	CPU* intelcpu = new IntelCPU;
	VideoCard *intelvc = new IntelVideoCard;
	Memory *men = new IntelMemory;

	//创建第一台电脑
	Computer* compter1 = new Computer(intelcpu, intelvc, men);
	compter1->doWork();
	delete compter1;

	//创建第二台电脑
	Computer * compter2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory
	);
	compter2->doWork();
	delete compter2;

	//创建第三台电脑
	Computer* compter3 = new Computer(new LenovoCPU, new IntelVideoCard, new IntelMemory
	);
	compter3->doWork();
	delete compter3;
}

int main()
{
	test();
	system("pause");
	return 0;
}