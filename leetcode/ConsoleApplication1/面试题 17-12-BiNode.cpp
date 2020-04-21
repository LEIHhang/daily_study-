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
	//������Ŀ������Ŀ��������ǵ�ǰ�����������˳��
	TreeNode* ans = new TreeNode(0), *cur = ans;
	void inorder(TreeNode* node)
	{
		if (node == NULL)
			return;
		inorder(node->left);
		node->left = NULL;
		//ָ��ǰ�ڵ�
		cur->right = node;
		//����cur
		cur = node;
		inorder(node->right);
	}
	TreeNode* convertBiNode(TreeNode* root)
	{
		inorder(root);
		return ans->right;
	}
};