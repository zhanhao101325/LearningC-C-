#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 

class Solution {

public:
	vector<TreeNode*> buildTrace(TreeNode* root, TreeNode* target) 
	{
		vector<TreeNode*> path;
		TreeNode* node = root;
		while (node != target) 
		{
			path.push_back(node);
			if (target->val < node->val) 
			{
				node = node->left;
			}
			else 
			{
				node = node->right;
			}
		}
		path.push_back(node);
		return path;
	}

	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
	{
		vector<TreeNode*>pArr = buildTrace(root, p);
		vector<TreeNode*>qArr = buildTrace(root, q);
		TreeNode* temp;
		for (int i = 0;(i<pArr.size())&&(i<qArr.size());++i)
		{
			if (qArr[i] == pArr[i])
			{
				temp = qArr[i];
			}
			else
			{
				break;
			}
		}
		return temp;
	}
};


class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		TreeNode* ancestor = root;
		while (true) {
			if (p->val < ancestor->val && q->val < ancestor->val) {
				ancestor = ancestor->left;
			}
			else if (p->val > ancestor->val && q->val > ancestor->val) {
				ancestor = ancestor->right;
			}
			else {
				break;
			}
		}
		return ancestor;
	}
};
