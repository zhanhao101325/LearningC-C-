//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <vector>
//#include <functional>
//#include <ctime>
////sort
//class Mycopare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(30);
//	sort(v.begin(),v.end(),greater<int>());
//	for (auto c : v)
//	{
//		cout << c << endl;
//	}
//
//}
//
////random_shuffle()
//void test02()
//{
//	srand((unsigned int)time(nullptr));
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	random_shuffle(v.begin(), v.end());
//	for (auto num : v)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//}
//
////merge  合并的两个序列有序 合并后依然有序
//void test03()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(2 * i);
//	}
//	vector<int>v3;
//	v3.resize(v1.size()+v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for (auto num : v3)
//	{
//		cout << num << " ";
//	}
//	cout << endl;
//}
////reverse
//void test04()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	reverse(v1.begin(), v1.end());
//	for (auto num : v1)
//	{
//		cout << num << " ";
//	}
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