#include <iostream>
#include <stack>
using namespace std;

void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	while (!s.empty())
	{
		cout << "ջ����Ԫ�أ�" << s.top() << endl;
		s.pop();
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;
}

 int main()
{
	 test01();
	 system("pause");
	 return 0;
}