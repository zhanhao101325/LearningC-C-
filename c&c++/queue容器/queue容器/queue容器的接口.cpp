#include <iostream>
#include <queue>
#include <string>
using namespace std;
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	int m_Age;
	string m_Name;
};
void test01()
{
	queue<Person>q;
	Person p1("��ɮ",30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	while (!q.empty())
	{
		cout << "��ͷԪ��--������" << q.front().m_Name << " ���� " << q.front().m_Age << endl;
		cout << "��βԪ��--������" << q.back().m_Name << " ���� " << q.back().m_Age << endl;
		q.pop();
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}