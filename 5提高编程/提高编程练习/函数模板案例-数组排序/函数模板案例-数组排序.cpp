#include<iostream>
using namespace std;

//案例描述：
//1.利用函数模板封装一个排序函数，可以对不同数据类型数组进行排序
//2.排序规则：从大到小，排序算法是选择排序
//3.分别用char 和 int 数组进行测试
template<typename T>
void Swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void Sort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;  //最大数的下标
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//交换max和 i
			Swap(arr[max], arr[i]);
		}
	}

}

template<typename T>
void printArr(T arr[],int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i]<<" " ;
		
	}
	cout << "sizeof(arr)" << sizeof(arr) << endl;
}

void test01()
{
	char charArr[] = "bacfe";
	int num = sizeof(charArr);
	Sort(charArr, num);
	printArr(charArr,num);
	cout << "sizeof(charArr)" << sizeof(charArr)<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}