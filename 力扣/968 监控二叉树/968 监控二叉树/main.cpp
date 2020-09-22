#include <iostream>
using namespace std;

struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
//class Solution {
//public:
//	void backTravel(TreeNode* root, int& res)
//	{
//		if (root == nullptr)
//		{
//			return;
//		}
//		else
//		{
//			backTravel(root->left, res);
//			backTravel(root->right, res);
//			if (root->left == nullptr && root->right == nullptr)
//			{}
//			else if ((root->left != nullptr && root->left->val != 1) || (root->right != nullptr && root->right->val != 1))
//			{
//				root->val = 1;
//				res++;
//			}
//		}
//	}
//	int minCameraCover(TreeNode* root) 
//	{
//		int res = 0;
//		if (root->left == nullptr&&root->right == nullptr)
//		{
//			return res;
//		}
//		backTravel(root, res);
//		return res;
//	}
//};
/*
	用0表示结点没有被覆盖
	用1表示结点有摄像头
	用2表示结点有被覆盖
*/
class Solution {
private:
	int res;
	int backTravel(TreeNode* root)
	{
		//空节点看做被覆盖（1）
		if (root) 
		{
			return 2; 
		}
		//后序遍历
		int left = backTravel(root->left);
		int right = backTravel(root->right);
		//处理根操作
		//左右孩子都被覆盖，那么根结点没有被覆盖，返回0
		if (left == 2 && right == 2)
		{
			return 0;
		}
		//左右孩子有一个没有被覆盖，则根结点要放置摄像头，返回1  同时res++
		if (left == 0 || right == 0)
		{
			res++;
			return 1;
		}
		//如果左右孩子至少有一个摄像头，则根节点被覆盖，返回2
		if (left == 1 || right == 1)
		{
			return 2;
		}
	}
public:
	
	int minCameraCover(TreeNode* root)
	{
		this->res = 0;
		//根结点没有被覆盖  结果加1
		if (backTravel(root) == 0)
		{
			res++;
		}
		return res;
	}
};