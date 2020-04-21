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
	//后序遍历DFS
	//p,q分别在不同的子树，说明当前根节点就是最近公共祖先
	//p,q在一颗子树上，则继续递归调用
	//p == root|| q==root，说明p,q层高不同，高的那个就是最近公共祖先。
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
			return NULL;
		if (root == p || root == q)
			return root;
		TreeNode* l = lowestCommonAncestor(root->left, p, q);
		TreeNode* r = lowestCommonAncestor(root->right, p, q);
		if (l&&r)
		{
			return root;
		}
		return l ? l : r;
	}
};