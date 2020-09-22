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
	��0��ʾ���û�б�����
	��1��ʾ���������ͷ
	��2��ʾ����б�����
*/
class Solution {
private:
	int res;
	int backTravel(TreeNode* root)
	{
		//�սڵ㿴�������ǣ�1��
		if (root) 
		{
			return 2; 
		}
		//�������
		int left = backTravel(root->left);
		int right = backTravel(root->right);
		//���������
		//���Һ��Ӷ������ǣ���ô�����û�б����ǣ�����0
		if (left == 2 && right == 2)
		{
			return 0;
		}
		//���Һ�����һ��û�б����ǣ�������Ҫ��������ͷ������1  ͬʱres++
		if (left == 0 || right == 0)
		{
			res++;
			return 1;
		}
		//������Һ���������һ������ͷ������ڵ㱻���ǣ�����2
		if (left == 1 || right == 1)
		{
			return 2;
		}
	}
public:
	
	int minCameraCover(TreeNode* root)
	{
		this->res = 0;
		//�����û�б�����  �����1
		if (backTravel(root) == 0)
		{
			res++;
		}
		return res;
	}
};