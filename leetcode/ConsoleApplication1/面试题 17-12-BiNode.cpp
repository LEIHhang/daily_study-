/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	//根据题目描述，目标链表就是当前树的中序遍历顺序
	TreeNode* ans = new TreeNode(0), *cur = ans;
	void inorder(TreeNode* node)
	{
		if (node == NULL)
			return;
		inorder(node->left);
		node->left = NULL;
		//指向当前节点
		cur->right = node;
		//更新cur
		cur = node;
		inorder(node->right);
	}
	TreeNode* convertBiNode(TreeNode* root)
	{
		inorder(root);
		return ans->right;
	}
};