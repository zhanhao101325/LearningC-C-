#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
		/*{
			int i = 0;
			vector<int> arr;
			vector<int> temp(10000,-1);
			for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
			{
				temp[(*it)] = i++;
			}
			i = 0;
			for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
			{
				int another = target - (*it);
				if (another >=0&&temp[another] != -1 && another!=nums[i])
				{
					arr.push_back(i);
					arr.push_back(temp[another]);
					return arr;
				}
				i++;
			}
			return arr;
		}*/
	{
		map<int, int> a;//建立hash表存放数组元素
		vector<int> b(2, -1);//存放结果
		for (int i = 0; i < nums.size(); i++)
			a.insert(map<int, int>::value_type(nums[i], i));
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(target - nums[i]) > 0 && (a[target - nums[i]] != i))
				//判断是否找到目标元素且目标元素不能是本身
			{
				b[0] = i;
				b[1] = a[target - nums[i]];
				break;
			}
		}
		return b;
	}
};

int main()
{
	Solution s;
	//int arr[]{ 2,7,11,15 };
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(3);
	//arr.push_back(11);
	//arr.push_back(15);
	//arr.push_back(2);
	//s.twoSum(arr, 9);
	vector<int> res = s.twoSum(arr, 6);
	for (vector<int>::iterator it = res.begin(); it != res.end(); it++)
	{
		cout << (*it) << " ";
	}

	return 0;
}