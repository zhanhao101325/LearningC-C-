//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <vector>
//
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v +100;
//	}
//};
//class Myprint
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//	
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget;
//	vTarget.resize(v.size());
//	transform(v.begin(), v.end(), vTarget.begin(),Transform() );
//	for_each(vTarget.begin(), vTarget.end(), Myprint());
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}