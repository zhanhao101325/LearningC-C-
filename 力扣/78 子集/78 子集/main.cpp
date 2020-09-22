#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> t;
	vector<vector<int>> ans;

	vector<vector<int>> subsets(vector<int>& nums) {
		int n = nums.size();
		int first = 1 << n;
		for (int mask = 0; mask < (first); ++mask) {
			t.clear();
			for (int i = 0; i < n; ++i) {
				int second = (1 << i);
				if (mask & (second)) {
					t.push_back(nums[i]);
				}
			}
			ans.push_back(t);
		}
		return ans;
	}
};

class Solution1
{
public:
	void dfs(int cur, int n, vector<vector<int>> &res, vector<int> &temp, vector<int>& nums)
	{
		if (cur == n)
		{
			res.push_back(temp);
			return;
		}
		else
		{
			temp.push_back(nums[cur]);
			dfs(cur + 1, n, res, temp, nums);
			temp.pop_back();
			dfs(cur + 1, n, res, temp, nums);
		}
	}
	vector<vector<int>> subsets(vector<int>& nums)
	{
		vector<vector<int>> res;
		vector<int> temp;
		int n = nums.size();
		dfs(0, n, res, temp, nums);
		return res;
	}
};

int main()
{
	vector<int>v{1,2,3};
	//Solution  s;
	Solution1 s1;
	//vector<vector<int>> res = s.subsets(v);
	vector<vector<int>> res = s1.subsets(v);
	for (auto v : res)
	{
		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}