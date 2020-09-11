//#include <iostream>
//#include <deque>
//using namespace std;
//
////int main()
////{
////	test01();
////	system("pasue");
////	return 0;
////}
//
//void outDeque(const deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	outDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	outDeque(d2);
//
//	deque<int>d3(10, 100);
//	outDeque(d3);
//
//	deque<int>d4(d3);
//	outDeque(d4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}