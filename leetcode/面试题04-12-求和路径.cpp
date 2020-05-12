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
	int number = 0;
	void dfs(TreeNode* node, int sum)
	{

		if (node == NULL)
			return;
		sum -= node->val;
		if (sum == 0)
		{
			++number;
		}
		dfs(node->left, sum);
		dfs(node->right, sum);
		return;
	}
	void _pathSum(TreeNode* root, int sum) {
		if (root == NULL)
			return;
		dfs(root, sum);
		_pathSum(root->left, sum);
		_pathSum(root->right, sum);
		return;
	}
	int pathSum(TreeNode* root, int sum) {
		_pathSum(root, sum);
		return number;
	}
};