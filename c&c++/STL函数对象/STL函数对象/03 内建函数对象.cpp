#include <iostream>
using namespace std;
#include <string>
#include <functional> 
#include <vector>
#include <algorithm>
void test01()
{
	negate<int>n;
	auto res = n(50);
	cout << res << endl;
}
//����º���
void test02()
{
	plus<int>p;
	auto res = p(10, 20);
	cout << res << endl;
}
//��ϵ�º���
void test03()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	for (auto res : v)
	{
		cout << res << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(),greater<int>() );
	for (auto res : v)
	{
		cout << res << " ";
	}
}
//�߼��º���
void test04()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	//v.push_back(true);
	for (auto c : v)
	{
		cout << c << " ";
	}
	cout << endl;
	vector<bool>v2;
	v2.resize(v.size());//����Ҫ�Ĵ��� �����˱���Ҫ�пռ�
	transform(v.begin(), v.end(),v2.begin(),logical_not<bool>());
	for (auto c : v2)
	{
		cout << c << " ";
	}
	cout << endl;
}

int main()
{
	test04();
	system("pause");
	return 0;
}
