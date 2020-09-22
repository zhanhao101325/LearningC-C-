//#include <iostream>
//using namespace std;
//#include <string>
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;//内部自己的状态
//};
//
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//	cout << "MyPrint调用的次数为：" << myPrint.count << endl;
//}
//void doPrint(MyPrint &mp,string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "hello c++");
//}
//
//int main()
//{
//	//test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}