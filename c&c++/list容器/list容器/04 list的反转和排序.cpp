#include <iostream>
#include <list>
using namespace std;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

void outList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);
	outList(L1);
	//·´×ª
	L1.reverse();
}



int main()
{
	test01();
	system("pause");
	return 0;
}