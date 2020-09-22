//#include <iostream>
//#include <list>
//using namespace std;
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//
//void outList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////list的大小操作
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	outList(L1);
//	L1.resize(10);
//	outList(L1);
//}
////list的插入和删除
//void test02()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//	outList(L1);
//	L1.pop_back();
//	outList(L1);
//	L1.pop_front();
//	L1.pop_back();
//	outList(L1);
//	L1.insert(L1.begin(), 1000);
//	L1.push_back(1000);
//	outList(L1);
//
//	L1.remove(1000);
//	outList(L1);
//}
//
////list数据存取
//void test03()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}