#include<iostream>
#include <string>
using namespace std;
#include<vector>

vector<string> sortlenString(int n, vector<string> &s)
{
	vector<string> str ;
	string temp;
	for (vector<string>::iterator it = s.begin(); it != s.end(); it++)
	{
		for (vector<string>::iterator vit = s.begin(); vit != s.end(); vit++)
		{
			if (it->size() < vit->size())
			{
				it->swap(*vit);
			}
		}
	}
	str = s;
	return str;
}

vector<string> sortdicString(int n, vector<string> &s)
{
	vector<string> str;
	string temp;
	for (vector<string>::iterator it = s.begin(); it != s.end(); it++)
	{
		for (vector<string>::iterator vit = s.begin(); vit != s.end(); vit++)
		{
			if (it->compare(*vit)==-1)
			{
				it->swap(*vit);
			}
		}
	}
	str = s;
	return str;
}

//int main()
//{
//	vector<string> str;
//	str.push_back("a");
//	str.push_back("baa");
//	str.push_back("cc");
//	str = sortlenString(3, str);
//	cout << "长度排序：" << endl;
//	for (vector<string>::iterator it = str.begin(); it != str.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//	str= sortdicString(3, str);
//	cout << "字典排序：" << endl;
//	for (vector<string>::iterator it = str.begin(); it != str.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//
//
////#include<cstdio>
////#include<cstring>
////#include<iostream>
////using namespace std;
////char a[][5] = { "12","13","123","1234","21","34" };
////int n = 6;
////void len_sort() {
////	for (int i = 0; i < n; i++)
////		for (int j = i + 1; j < n; j++)
////			if (strlen(a[i]) > strlen(a[j]))//先按照长度排序 
////				swap(a[i], a[j]);
////	//	for(int i=0;i<n;i++)
////		//	printf("--->>>%s\n",a[i]);	
////	for (int i = 0; i < n; i++)
////		for (int j = i + 1; j < n; j++)
////			if (strlen(a[i]) == strlen(a[j]) && strcmp(a[i], a[j]) >= 0)//在长度相同的情况下字典序排序 
////				swap(a[i], a[j]);
////	for (int i = 0; i < n; i++)
////		printf("--->>>%s\n", a[i]);
////}
////int main() {
////	len_sort();
////}


