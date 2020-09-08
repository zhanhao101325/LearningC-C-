#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//int main()
//{
//	test01();
//	return 0;
//	system("pause");
//}
void test01()
{
	vector<vector<int>> V;

	//´´½¨Ð¡ÈÝÆ÷
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	//vector<int>v5;
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
		//v5.push_back(i + 5);
	}
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);
	//V.push_back(v5);
	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		//(*it)  -----ÈÝÆ÷
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " " ;
		}
		cout << endl;
	}

}


int main()
{
	test01();
	return 0;
	system("pause");
}