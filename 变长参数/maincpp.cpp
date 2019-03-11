#include <iostream>
#include <cstdarg>

using namespace std;

//void Print(int n, ...)
//{
//	va_list args;			//va_list�ı����� ָ�򴫽����Ŀɱ䳤����
//	va_start(args, n);		//ʹargs����ָ���һ�������� n�ǿɱ��������ߵĲ���
//	for (int i = 0; i < n; i++)
//	{
//		int arg = va_arg(args, int);	//����һ��int���͵�ָ�� ��ʹargsָ����һ������
//										//va_arg�ĵڶ�������ָ������Ҫ���صı�������
//		cout << arg << endl;
//	}
//	va_end(args);		//���va_list�ɱ�����б�
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

////�ݹ���ֹ����
//template <typename T>
//void Print(T t)
//{
//	cout << t << endl;
//}
//
////չ������
//template <typename T, typename... Args>
//void Print(T t, Args... args)
//{
//	cout << t << endl;
//	Print(args...);			//�Կɱ����ģ����еݹ�չ��
//}

////��ģ������
//template<typename... Args>
//class Print;
//
////��ģ�嶨��
////ͨ���̳з�ʽչ��������
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
////�ݹ���ֹ
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
