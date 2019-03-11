#include <iostream>
#include <cstdarg>

using namespace std;

//void Print(int n, ...)
//{
//	va_list args;			//va_list的变量， 指向传进来的可变长参数
//	va_start(args, n);		//使args变量指向第一个参数， n是可变参数最左边的参数
//	for (int i = 0; i < n; i++)
//	{
//		int arg = va_arg(args, int);	//返回一个int类型的指， 并使args指向下一个参数
//										//va_arg的第二个参数指定的是要返回的变量类型
//		cout << arg << endl;
//	}
//	va_end(args);		//清空va_list可变参数列表
//}

void Print(int m, int n, ...)
{
	va_list args;
	va_start(args, m);
	for (int i = 0; i < 4; i++)
	{
		int arg = va_arg(args, int);
		cout << arg << " ";
	}
	cout << endl;
	va_end(args);

	va_start(args, n);
	for (int i = 0; i < 4; i++)
	{
		int arg = va_arg(args, int);
		cout << arg << " ";
	}
	cout << endl;
	va_end(args);
}

////递归终止函数
//template <typename T>
//void Print(T t)
//{
//	cout << t << endl;
//}
//
////展开函数
//template <typename T, typename... Args>
//void Print(T t, Args... args)
//{
//	cout << t << endl;
//	Print(args...);			//对可变参数模板进行递归展开
//}

////类模板声明
//template<typename... Args>
//class Print;
//
////类模板定义
////通过继承方式展开参数包
//template<typename T, typename... Args>
//class Print<T, Args...> : public Print<Args...>
//{
//public:
//	Print()
//	{
//		cout << "class Print<T, Args...>" << endl;
//	}
//};
//
////递归终止
//template<typename T>
//class Print<T>
//{
//public:
//	Print()
//	{
//		cout << "class Print<T>" << endl;
//	}
//};

//class Print
//{
//public:
//	template<typename T>
//	Print(T t)
//	{
//		cout << t << endl;
//	}
//	template<typename Head, typename... Tails>
//	Print(Head head, Tails... tails)
//	{
//		cout << head << endl;
//		Print(tails...);
//	}
//};

//class Print
//{
//public:
//	Print(int n, ...)
//	{
//		va_list args;
//		va_start(args, n);
//		for (int i = 0; i < n; i++)
//		{
//			int arg = va_arg(args, int);
//			cout << arg << endl;
//		}
//		va_end(args);
//	}
//};


int main()
{
	Print(4, 4, 1, 2, 3, 4);

	system("pause");
	return 0;
}
