//#include <iostream>
//#include <set>
//using namespace std;
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//
//void outSet(set<int>&s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
////����
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	//s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�С��" << s1.size() << endl;
//	}
//	set<int>s2;
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(100);
//	s2.insert(600);
//	s1.swap(s2);
//	outSet(s1);
//	outSet(s2);
//}
//
////�����ɾ��
//void test02()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	//s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//	s1.erase(s1.begin());
//	outSet(s1);
//	s1.erase(30);
//	outSet(s1);
//	s1.erase(s1.begin(), s1.end());
//	outSet(s1);
//	s1.clear();
//	outSet(s1);
//}
//
////���Һ�ͳ��
//void test03()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//
//	set<int>::iterator it = s1.find(30);
//	if (it != s1.end())
//	{
//		cout << "�ҵ�Ԫ��" << *it << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	int nums = 0;
//	nums = s1.count(30);
//	cout << nums << endl;
//}
//
//
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}