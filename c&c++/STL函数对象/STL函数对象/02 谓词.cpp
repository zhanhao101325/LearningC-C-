//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return  (val > 5);
//			//return true;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找 有没有大于5的数字
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没找到元素大于5的数字" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数字" << *it << endl;
//	}
//}
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test02()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end());
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//	//使用函数对象 改变算法策略，变为排序规则为从小到大
//	sort(v.begin(), v.end(), MyCompare());
//	cout << "--------------" << endl;
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}