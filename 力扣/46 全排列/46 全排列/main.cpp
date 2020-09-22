#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

class Solution {
public:
	void coutVec(vector<int> &v)
	{
		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}

	void coutVec(vector<bool> &v)
	{
		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}
	void dfs(vector<int>& nums,int cur, int length, vector<vector<int>> &res, vector<int> &temp, vector<bool> &isChoise)
	{
		if (cur == length)
		{
			res.push_back(temp);
			cout << "-------------" << endl;
			return;
		}
		else
		{
			for (int i = 0; i < length; i++)
			{
				if (isChoise[i])
				{
					continue;
				}
				else
				{
					temp.push_back(nums[i]);
					cout << "²åÈë:" << nums[i] << endl;
					cout << "temp×´Ì¬£º";
					coutVec(temp);
					isChoise[i] = true;
					cout << "isChiose×´Ì¬£º";
					coutVec(isChoise);
					dfs(nums, cur + 1, length, res, temp, isChoise);
					temp.pop_back();
					cout << "ÍË³ö:" << nums[i] << endl;
					cout << "temp×´Ì¬£º";
					coutVec(temp);
					isChoise[i] = false;
					cout << "isChiose×´Ì¬£º";
					coutVec(isChoise);
				}
			}
		}
	}
	vector<vector<int>> permute(vector<int>& nums) 
	{
		vector<vector<int>> res;
		int len = nums.size();
		vector<bool>isChoise(len, 0);
		vector<int> temp;
		dfs(nums,0, len, res, temp,isChoise);
		return res;
	}
};

class Solution1 {
public:

	void coutVec(vector<int> &v)
	{
		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}

	void coutVec(vector<bool> &v)
	{
		for (auto num : v)
		{
			cout << num << " ";
		}
		cout << endl;
	}
	void dfs(vector<int>& nums, int cur, int length, vector<vector<int>> &res, vector<int> &temp, vector<bool> &isChoise)
	{
		if (cur == length)
		{
			res.push_back(temp);
			cout << "-------------" << endl;
			return;
		}
		else
		{
			for (int i = 0; i < length; i++)
			{
				if (isChoise[i] || (i > 0 && nums[i] == nums[i - 1] && !isChoise[i - 1]))
				{
					continue;
				}
				else
				{
					temp.push_back(nums[i]);
					cout << "²åÈë:" << nums[i] << endl;
					cout << "temp×´Ì¬£º";
					coutVec(temp);
					isChoise[i] = true;
					cout << "isChiose×´Ì¬£º";
					coutVec(isChoise);
					dfs(nums, cur + 1, length, res, temp, isChoise);
					temp.pop_back();
					cout << "ÍË³ö:" << nums[i] << endl;
					cout << "temp×´Ì¬£º";
					coutVec(temp);
					isChoise[i] = false;
					cout << "isChiose×´Ì¬£º";
					coutVec(isChoise);
				}
			}
		}
	}
	vector<vector<int>> permute(vector<int>& nums)
	{
		vector<vector<int>> res;
		int len = nums.size();
		sort(nums.begin(), nums.end());
		vector<bool>isChoise(len, 0);
		vector<int> temp;
		dfs(nums, 0, len, res, temp, isChoise);
		return res;
	}
};

void outVec(vector<vector<int>> v)
{
	for (auto vec : v)
	{
		for (auto num : vec)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}

int main()
{
	Solution1 s;
	vector<int> nums{ 1,1,2};
	vector<vector<int>> res=s.permute(nums);
	outVec(res);
	return 0;
}