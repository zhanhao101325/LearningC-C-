#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
	vector<int> temp;
	vector<vector<int>> arr;
	void dfs(int cur, int n, int k)
	{
		//当temp长度与k相等 退出
		if (temp.size() == k)
		{
			arr.push_back(temp);
			return;
		}
		//当剩下的元素全部取完都不够达到k时 退出
		if (temp.size() + n - cur + 1 < k)
		{
			return;
		}
		//考虑取当前值
		temp.push_back(cur);
		dfs(cur + 1, n, k);
		//考虑不取当前值
		temp.pop_back();
		dfs(cur + 1, n, k);
	}
	vector<vector<int>> combine(int n, int k)
	{
		dfs(1, n, k);
		return arr;
	}
};

int main()
{
	Solution s;
	vector<vector<int>> v = s.combine(4, 2);
	for (vector<vector<int>>::iterator it = v.begin(); it < v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++)
		{
			cout << (*vit) << " ";
		}
		cout << endl;
	}
	return 0;
}