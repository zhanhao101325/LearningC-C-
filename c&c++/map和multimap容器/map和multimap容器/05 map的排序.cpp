#include <iostream>
#include <map>
using namespace std;

//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class Mycompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};

class Mycompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void outMap(map<int, int,Mycompare> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int,Mycompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	outMap(m);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
