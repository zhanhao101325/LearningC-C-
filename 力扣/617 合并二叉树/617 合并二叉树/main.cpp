#include <iostream>

struct TreeNode {
    int val;
     TreeNode *left;
	 TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	void firOrder(TreeNode* root1, TreeNode *cur1, TreeNode* root2, TreeNode *cur2)
	{
		if (root2 == nullptr)
		{
			return;
		}
		if (root1 != nullptr && root2 != nullptr)
		{
			root1->val += root2->val;
			firOrder(root1->left, root1, root2->left,root2);
			firOrder(root1->right, root1, root2->right, root2);
		}
		if (root1 == nullptr && root2!=nullptr)
		{
			if (root2 == cur2->left)
			{
				cur1->left = new TreeNode(root2->val);
				root1 = cur1->left;
			}
			if (root2 == cur2->right)
			{
				cur1->right = new TreeNode(root2->val);
				root1 = cur1->right;
			}
			firOrder(root1->left, root1, root2->left, root2);
			firOrder(root1->right, root1, root2->right, root2);
		}
		
	}
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
	{
		if (t1 == nullptr)
		{
			return t2;
		}
		if (t2 == nullptr)
		{
			return t1;
		}

		firOrder(t1,nullptr,t2,nullptr);
		return t1;
	}
};