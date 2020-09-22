#include <iostream>
#include <set>
#include <string>
using namespace std;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

void outSet(set<int>&s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	outSet(s1);
	//指定排序规则从大到小
	set<int,MyCompare>s2;

	s2.insert(10);
	s2.insert(30);
	s2.insert(40);
	s2.insert(20);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class MyCompare1
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		return p1.m_Age>p2.m_Age;
	}
};

//存放自定义数据类型
void test02()
{
	//自定义类型都要指定排序规则
	set<Person,MyCompare1>s;
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}

}

int main()
{
	test02();
	system("pause");
	return 0;
}
