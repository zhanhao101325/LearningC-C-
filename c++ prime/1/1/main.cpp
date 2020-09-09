#include <iostream>
using namespace std;
int main()
{
	//extern int i = 0;
	for (int i = 0; i < 5; i++)
	{
		static int a = 5;
		cout << a << endl;
		a++;
	}
	return 0;
}