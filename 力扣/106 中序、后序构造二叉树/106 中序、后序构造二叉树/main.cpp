#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
private: 
	unordered_map<int, int> idx_map;
public:
	
	TreeNode* travlesal(vector<int>& inorder, vector<int>& postorder)
	{
		if (postorder.size() == 0)
		{
			return nullptr;
		}
		int value = postorder[postorder.size() - 1];
		TreeNode *root = new TreeNode(value);
		if (postorder.size() == 1)
		{
			return root;
		}
		int index = idx_map[value];

		/*for (index = 0; index < inorder.size(); index++)
		{
			if (inorder[index] == value)
				break;
		}*/
		postorder.resize(postorder.size() - 1);
		vector<int> leftInorder(inorder.begin(),inorder.begin()+index);
		vector<int> rightInorder(inorder.begin()+index+1, inorder.end());
		vector<int> leftPostorder(postorder.begin(),postorder.begin()+leftInorder.size());
		vector<int> rightPostorder(postorder.begin() + leftInorder.size(),postorder.end());
		root->left = travlesal(leftInorder, leftPostorder);
		root->right = travlesal(rightInorder, rightPostorder);
		return root;
	}

	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
	{
		TreeNode *root = nullptr;
		int n = postorder.size();
		int i = 0;
		for (auto& val : inorder) 
		{
			idx_map[val] = i++;
		}
		root = travlesal( inorder, postorder);
		return root;
	}
};