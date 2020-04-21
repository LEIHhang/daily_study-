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
	//�������DFS
	//p,q�ֱ��ڲ�ͬ��������˵����ǰ���ڵ���������������
	//p,q��һ�������ϣ�������ݹ����
	//p == root|| q==root��˵��p,q��߲�ͬ���ߵ��Ǹ���������������ȡ�
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