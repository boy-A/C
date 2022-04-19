#include"head.h"
int main() 
{
	int arr[10];
	cout << "请输入任意10个数：" ;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "排序前数据是: ";
	for (int j = 0; j < 10; j++)
		cout << arr[j] << " ";
	cout << endl;

	cout << "**********************************************";
	cout << endl;
	pop(arr);
	cout << "排序后数据是: ";
	for (int j = 0; j < 10; j++)
		cout << arr[j] << " ";
	cout << endl;
	system("pause");
	return  0;

}
