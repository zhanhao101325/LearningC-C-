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
//	//���� == ��find֪����ô�Ƚ�
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
////����������������
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//����һ���������Ƿ���5���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << *it << endl;
//	}
//}
////�����Զ�����������
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
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << " ������" << it->m_Name << " ���䣺" << it->m_Age << endl;
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
////find_if����
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
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�����5������Ϊ��" << *it << endl;
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
//	//��һ���������20����
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��������20���� " << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
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
//		cout << "δ�ҵ������ظ�Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��������ظ�Ԫ�أ�" << *it << endl;
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
//	//binary_searchʹ��ʱ�����ڵ����ݱ�������
//	sort(v.begin(), v.end());
//	bool flag = binary_search(v.begin(), v.end(), 9);
//	if (flag)
//	{
//		cout << "�ҵ���Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "û�ҵ�Ԫ��" << endl;
//	}
//}
//
////count ͳ��Ԫ�ظ���
////������������
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
//	cout << "40Ԫ�صĸ���Ϊ��" << num << endl;
//}
//
////�Զ�����������
//void test08()
//{
//	vector<Person>v;
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//	Person p("�����", 35);
//	//vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//v.push_back(p);
//	int num = count(v.begin(), v.end(),p);
//	cout << "�������������ͬ��������" << num << endl;
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
//	cout << "����20�ĸ�����" << num << endl;
//
//}
//void test10()
//{
//	vector<Person>v;
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 40);
//	Person p("�����", 35);
//	//vector<Person>v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "����20���������" << num << endl;
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