#include <iostream>
#include <string>
using namespace std;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << substr << endl;
}

void test02()
{
	string email = "zhangsan@sina.com";
	string substr = email.substr(0, email.find('@'));
	cout << substr << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}