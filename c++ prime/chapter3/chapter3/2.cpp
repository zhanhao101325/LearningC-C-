#include <iostream>
#include <string>
#include <cstring>
//#include <cctype>
//#include <vector>
using namespace std;

int test01()
{
	int arr[][4]{ {1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int(*arrptr)[4] = arr;
	cout << " *(*(arrptr + 1) + 1) = " << *(*(arrptr + 1) + 1) << endl;

	int arr1[4]{ 1,2,3,4 };
	int(&arrptr1)[4] = arr1;
	cout << " arrptr1[0]= " <<arrptr1[0] << endl;
	return 10;
	//int *(&arrptr2)[4] = ;
	

}

void test02()
{
	int arr1[4]{ 1,2,3,4 };
	auto b = begin(arr1);
	auto e = end(arr1);
	for (; b != e; b++)
	{
		cout << *b << " ";
	}
	cout << endl;
}

void test03()
{
	const char ca[] = { 'h','e','l','l','o' };//û����'/0'���� ���Բ�����һ���ַ���
	const char *cp = ca;
	while (*cp)                              // һֱ�ҵ����ַ����˳�ѭ��
	{
		cout << *cp << endl;
		++cp;
	}
	string s{ "hello world" };
	const char *c = s.c_str();
	char *str;
	///strcpy(str, c);
	//str[0] = 'w';
}
int main()
{
	//test01();
	//test02();
	//test03();
	int i = 0;
	cout << i << ++i << endl;
	system("pause");
	return 0;
}