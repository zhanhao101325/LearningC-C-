#include <iostream>
#include <numeric>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>
//ste_intersection()
void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	v3.resize(min(v1.size(),v2.size()));
	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for (vector<int>::iterator vit = v3.begin();vit!=it;vit++)
	{
		cout << *vit << " ";
	}
}

//set_union
void test02()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	v3.resize(v1.size()+ v2.size());
	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for (vector<int>::iterator vit = v3.begin(); vit != it; vit++)
	{
		cout << *vit << " ";
	}
}

void test03()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	v3.resize(max(v1.size(),v2.size()));
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for (vector<int>::iterator vit = v3.begin(); vit != it; vit++)
	{
		cout << *vit << " ";
	}
	cout << endl;
	v4.resize(max(v1.size(), v2.size()));
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());
	for (vector<int>::iterator vit = v4.begin(); vit != it; vit++)
	{
		cout << *vit << " ";
	}
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}