//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <vector>
//#include <functional>
//
////copy
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int> v2;
//	v2.resize(v.size());
//	copy(v.begin(), v.end(), v2.begin());
//	for (auto num : v2)
//	{
//		cout << num << " ";
//	}
//}
//
////repalce
//void test02()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	cout << "old" << endl;
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//}
////class Com
////{
////public:
//	bool Com(int v1)
//	{
//		return (v1 > 30);
//	}
////};
////replace_if
//void test03()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	cout << "old" << endl;
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	replace_if(v.begin(), v.end(), Com, 300);
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//}
//
////swap
//void test04()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//	v1.push_back(55);
//	cout << "old" << endl;
//	for (auto num : v1)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	for (auto num : v2)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	swap(v1,v2);
//	for (auto num : v1)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	for (auto num : v2)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//	return 0;
//}