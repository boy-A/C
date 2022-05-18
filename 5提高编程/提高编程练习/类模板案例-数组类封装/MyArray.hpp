//自己的通用数组类
#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:
	//构造函数
	MyArray(int capacity)
	{
		cout << "Myarray的构造函数调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	

	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		cout << "myarray的拷贝构造函数调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->paddress = arr.paddress;
		this->pAddress = new T[arr.m_Capacity];

		//将arr中的数据都拷贝过来
		for(int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	


	//operator=  防止浅拷贝问题
	MyArray& operator=(const MyArray &arr)
	{
		cout << "Myarray的operator=函数调用" << endl;
		//先判断原来的堆区是否有数据，如果有数据先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;
	this->pAddress = new T[arr.m_Capacity];
	for (int i = 0; i < this->m_Size; i++)
	{
		this->pAddress[i] = arr.pAddress[i];

	}
	return *this;


	}



	//尾插法
	void Push_Back(const T & val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		//在数组末尾插入数据
		this->pAddress[this->m_Size] = val;
		//更新数组大小
		this->m_Size++;

	}


	//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}


	//通过下标访问数据
	//函数调用如果想做为左值存在，需要返回一个引用 arr[0] = 100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}


	//返回数组大小
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		cout << "Myarray的析构函数调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:

	T * pAddress;  //指针指向堆区开辟的真实数组
	int m_Capacity;  //数组容量
	int m_Size;   //数组大小

};