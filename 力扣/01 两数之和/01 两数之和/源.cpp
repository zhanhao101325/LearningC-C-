#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int>res;
		unordered_map<int, int> m;
		for (decltype(nums.size()) i = 0; i <nums.size(); i++)
		{
			
			auto it = m.find( target- nums[i]);
			if (it==m.end())
			{
				m.insert(make_pair(nums[i], i));
			}
			else
			{
				res.push_back(it->second);
				res.push_back(i);
				return res;
			}
		}
		return {};
	}
};

int main()
{
	Solution s;
	//int arr[]{ 2,7,11,15 };
	vector<int> arr{ 2,2,9,11 };
	vector<int> res = s.twoSum(arr,4);
	for (vector<int>::iterator it = res.begin(); it != res.end(); it++)
	{
		cout << (*it) << " ";
	}

	return 0;
}