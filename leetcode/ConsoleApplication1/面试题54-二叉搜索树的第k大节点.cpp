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
	int  ans = 0, count = 0;
	void _kthLargest(TreeNode* root, int k)
	{
		if (root->right != NULL)
		{
			_kthLargest(root->right, k);
		}
		if (++count == k)
		{
			ans = root->val;
			return;
		}
		if (root->left != NULL)
		{
			_kthLargest(root->left, k);
		}
	}
	int kthLargest(TreeNode* root, int k) {
		_kthLargest(root, k);
		return ans;
	}
};