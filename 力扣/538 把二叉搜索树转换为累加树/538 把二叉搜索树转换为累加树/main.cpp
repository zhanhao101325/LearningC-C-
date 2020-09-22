#include <iostream>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution 
{
public:
	int sum = 0;
	void reMidTravel(TreeNode* root)
	{
		if (root == nullptr)
		{
			return;
		}
		else
		{
			reMidTravel(root->right);
			sum += root->val;
			root->val = sum;
			reMidTravel(root->left);
		}
	}
	TreeNode* convertBST(TreeNode* root)
	{
		reMidTravel(root);
		return root;
	}
};
 