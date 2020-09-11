//#include <iostream>
//#include <deque>
//using namespace std;
////int main()
////{
////	test01();
////	system("pause");
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
//		if (i < 5)
//		{
//			d1.push_back(i);
//		}
//		else
//			d1.push_front(i);
//	}
//	outDeque(d1);
//	d1.pop_back();
//	d1.pop_front();
//	outDeque(d1);
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	outDeque(d1);
//	d1.insert(d1.begin(), 1000);
//	outDeque(d1);
//	d1.insert(d1.begin(), 2,2000);
//	outDeque(d1);
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d2.push_back(4);
//	d2.push_back(5);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	outDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d2.push_back(4);
//	d2.push_back(5);
//	deque<int>::iterator it = d2.begin();
//	it++;
//	d2.erase(it);
//	outDeque(d2);
//	d2.erase(d2.begin(), d2.begin() + 2);
//	outDeque(d2);
//	d2.clear();
//	outDeque(d2);
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}