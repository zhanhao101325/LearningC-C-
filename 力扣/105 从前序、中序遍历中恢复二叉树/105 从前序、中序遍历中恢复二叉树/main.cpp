#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


 struct TreeNode 
 {
	 int val;
	 TreeNode *left;
	 TreeNode *right;
	 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
	unordered_map<int, int> m;
public:
	TreeNode *travel(vector<int>& preorder, int preorderBegin, int perorderEnd, vector<int>& inorder, int inorderBegin, int inorderEnd)
	{
		if (preorderBegin == perorderEnd)
		{
			return nullptr;
		}
		int value = preorder[preorderBegin];
		TreeNode *root = new TreeNode(value);
		if (perorderEnd - preorderBegin == 1)
		{
			return root;
		}
		int index = m[value];
		int leftinorderBegin = inorderBegin;
		int leftinorderEnd = index;
		int rightinorderBegin = index + 1;
		int rightinorderEnd = inorderEnd;

		int leftpreorderBegin = preorderBegin + 1;
		int leftpreorderEnd = leftpreorderBegin + (leftinorderEnd - leftinorderBegin);
		int rightpreorderBegin = leftpreorderEnd;
		int rightpreorderEnd = perorderEnd;
		root->left = travel(preorder, leftpreorderBegin, leftpreorderEnd, inorder,leftinorderBegin, leftinorderEnd);
		root->right = travel(preorder, rightpreorderBegin, rightpreorderEnd, inorder,rightinorderBegin, rightinorderEnd);
		return root;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
	{
		int i = 0;
		if (preorder.size() == 0 || inorder.size() == 0)
		{
			return nullptr;
		}
		for (vector<int>::iterator it = inorder.begin(); it != inorder.end(); it++)
		{
			m[*it] = i++;
		}
		return travel(preorder, 0, preorder.size(), inorder, 0, inorder.size());
	}
};