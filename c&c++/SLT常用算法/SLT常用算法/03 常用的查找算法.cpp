//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <vector>
//#include <string>
//#include <set>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	//重载 == 让find知道怎么比较
//	bool operator==(const Person &p)
//	{
//		if (this->m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//	string m_Name;
//	int m_Age;
//};
////查找内置数据类型
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//查找一下容器中是否有5这个元素
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << *it << endl;
//	}
//}
////查找自定义数据类型
//void test02()
//{
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << " 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//}
//
//class Greater
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
////find_if查找
//void test03()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), Greater());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//}
//
//class Greater20
//{
//public:
//	bool operator()(Person &p)
//	{
//		return p.m_Age > 20;
//	}
//};
//void test04()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	//vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//找一个年龄大于20的人
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到年龄大于20的人 " << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//}
//
////adjacent_find
//void test05()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end())
//	{
//		cout << "未找到相邻重复元素" << endl;
//	}
//	else
//	{
//		cout << "找到了相邻重复元素：" << *it << endl;
//	}
//}
//
////binary_search
//void test06()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(6);
//	v.push_back(3);
//	v.push_back(7);
//	v.push_back(8);
//	v.push_back(12);
//	v.push_back(9);
//	//binary_search使用时容器内的数据必须有序
//	sort(v.begin(), v.end());
//	bool flag = binary_search(v.begin(), v.end(), 9);
//	if (flag)
//	{
//		cout << "找到了元素" << endl;
//	}
//	else
//	{
//		cout << "没找到元素" << endl;
//	}
//}
//
////count 统计元素个数
////内置数据类型
//void test07()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(30);
//	int num = count(v.begin(),v.end(),40);
//	cout << "40元素的个数为：" << num << endl;
//}
//
////自定义数据类型
//void test08()
//{
//	vector<Person>v;
//	Person p1("刘备", 35);
//	Person p2("关于", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//	Person p("诸葛亮", 35);
//	//vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//v.push_back(p);
//	int num = count(v.begin(), v.end(),p);
//	cout << "和诸葛亮年龄相同的人数：" << num << endl;
//}
//class Greaternum20
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 20;
//	}
//};
////count_if
//void test09()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(30);
//	int num = count_if(v.begin(), v.end(), Greaternum20());
//	cout << "大于20的个数：" << num << endl;
//
//}
//void test10()
//{
//	vector<Person>v;
//	Person p1("刘备", 35);
//	Person p2("关于", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//	Person p("诸葛亮", 35);
//	//vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "大于20岁的人数：" << num << endl;
//}
//int main()
//{
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	//test06();
//	//test07();
//	//test08();
//	test09();
//	test10();
//	return 0;
//}