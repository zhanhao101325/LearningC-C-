#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
void outDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	deque<int>d1;
	d1.push_back(30);
	d1.push_back(20);
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(50);
	outDeque(d1);
	sort(d1.begin(),d1.end());
	cout << "ÅÅÐòºó£º";
	outDeque(d1);
}


int main()
{
	test01();
	system("pause");
	return 0;
}