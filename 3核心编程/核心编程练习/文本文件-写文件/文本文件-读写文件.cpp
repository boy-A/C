#include<iostream>
#include<fstream>
#include<string>
using namespace std;


//文本文件-写文件
void testWrite()
{
	//1.包含头文件 fstream

	//2. 创建刘对象
	ofstream ofs;
	//3. 指定打开方式
	ofs.open("test.txt",ios::out);
		//4. 写入内容
	ofs << "姓名：张三" << endl;
	ofs << "姓名：李四" << endl;
	ofs.close();
	
	
}

void testRead()
{
	//1.包含头文件

	//2. 创建流对象

	ifstream ifs;
	//3. 打开文件 并且判断是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	//4. 读数据
		// 第一种方法
			//char buf[1024] = { 0 };
			//while (ifs >> buf)
			//{
			//	cout << buf << endl;
 	
			//}

		// 第二种
			//char buf[1024] = { 0 };
			//while (ifs.getline(buf, sizeof(buf)))
			//{
			//	cout << buf << endl;
			//
			//}
		
	    // 第三种
			//string buf;
			//while (getline(ifs, buf))
			//{
			//	cout << buf << endl;
			//}

		//第四种
			char c;
			while ((c=ifs.get())!=EOF)   //EOF end of file
			{
				cout << c;
			}
	//5. 关闭文件
	ifs.close();
}
int main()
{
	//testWrite();
	testRead();
	system("pause");
	return 0;
}