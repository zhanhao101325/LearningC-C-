#include <iostream>
#include <vector>
using namespace std;
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

void test01()
{
	vector<int> v1;
	v1.reserve(100000);
	int num = 0;
	int *p = nullptr;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}