#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>
#include <unordered_set>
class Solution {
public:
	int lengthOfLongestSubstring(string s)
	{
		unordered_set<char> s;
		int n = s.size();
		int beg = -1, end = 0;

	}
};





int main()
{
	Solution s;
	string str = "pwwkew";
	int max = s.lengthOfLongestSubstring(str);
	cout << max << endl;
}