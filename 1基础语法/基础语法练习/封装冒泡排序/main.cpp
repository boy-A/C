#include"head.h"
int main() 
{
	int arr[10];
	cout << "����������10������" ;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "����ǰ������: ";
	for (int j = 0; j < 10; j++)
		cout << arr[j] << " ";
	cout << endl;

	cout << "**********************************************";
	cout << endl;
	pop(arr);
	cout << "�����������: ";
	for (int j = 0; j < 10; j++)
		cout << arr[j] << " ";
	cout << endl;
	system("pause");
	return  0;

}
