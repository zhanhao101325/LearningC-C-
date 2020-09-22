#include <iostream>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//[3, 9, 20, null, null, 15, 7]

class Solution {
public:
	void orderTrav(TreeNode* root, TreeNode* cur, int &res)
	{
		if (root == nullptr)
		{
			return;
		}
		else if (root->left == nullptr&&root->right == nullptr)
		{
			if (root == cur->left)
			{
				res += root->val;
			}
			return;
		}

		else
		{
			orderTrav(root->left, root, res);
			orderTrav(root->right, root, res);

		}
	}

	int sumOfLeftLeaves(TreeNode* root)
	{
		int res = 0;
		if (root == nullptr)
		{
			return res;
		}
		if (root->left == nullptr&&root->right == nullptr)
		{
			return res;
		}
		orderTrav(root, nullptr, res);
		return res;
	}

};


class Solution1 {
public:
	int sumOfLeftLeaves(TreeNode* root) {
		if (root == NULL) return 0;
		int sum = 0;
		if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
			sum = root->left->val;
		}
		return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
	}
};



