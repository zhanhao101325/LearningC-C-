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
	//ָ���������Ӵ�С
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

//����Զ�����������
void test02()
{
	//�Զ������Ͷ�Ҫָ���������
	set<Person,MyCompare1>s;
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}

}

int main()
{
	test02();
	system("pause");
	return 0;
}
