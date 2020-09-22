//#include <iostream>
//#include <map>
//using namespace std;
//
////int main()
////{
////	test01();
////	system("pause");
////	return 0;
////}
//
//void outMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
//	}
//	cout << endl;
//}
////大小操作
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 10));
//	m.insert(pair<int, int>(3, 10));
//	m.insert(pair<int, int>(4, 40));
//	outMap(m);
//
//	if (m.empty())
//	{
//		cout << "map为空" << endl;
//	}
//	else
//	{
//		cout << "map不为空" << endl;
//		cout << "map的大小为：" << m.size() << endl;
//	}
//}
//
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 10));
//	m.insert(pair<int, int>(3, 10));
//	
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 400));
//	m2.insert(pair<int, int>(5, 500));
//	m2.insert(pair<int, int>(6, 600));
//
//	cout << "交换前：" << endl;
//	outMap(m);
//	outMap(m2);
//
//	cout << "交换后：" << endl;
//	m.swap(m2);
//	outMap(m);
//	outMap(m2);
//	
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}