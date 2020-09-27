#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	int base, count, maxCount;
	vector<int> res;
	void updata(int val)
	{
		if (val == base)
		{
			++count;
		}
		else
		{
			count = 1;
			base = val;
		}
		if (count == maxCount)
		{
			res.push_back(base);
		}
		if (count > maxCount)
		{
			maxCount = count;
			res = vector<int>{ base };
		}

	}
	
	vector<int> findMode(TreeNode* root)
	{
		TreeNode * pre= nullptr,*cur =root;
		while (cur)
		{
			if (cur->left == nullptr)
			{
				//进行处理
				updata(cur->val);
				cur = cur->right;
				continue;
			}
			for (pre = cur->left; pre->right != nullptr && pre->right != cur; pre = pre->right);

			if (pre->right == nullptr)
			{
				pre->right = cur;
				cur = cur->left;
			}
			else
			{
				pre->right = nullptr;
				updata(cur->val);
				cur = cur->right;
			}
		}
		return res;
	}
};