#include<iostream>
using namespace std;

//����������
//1.���ú���ģ���װһ�������������ԶԲ�ͬ�������������������
//2.������򣺴Ӵ�С�������㷨��ѡ������
//3.�ֱ���char �� int ������в���
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
		int max = i;  //��������±�
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//����max�� i
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