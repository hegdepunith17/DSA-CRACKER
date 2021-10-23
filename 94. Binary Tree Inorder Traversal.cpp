class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if (!root )return ans;
        stack<TreeNode*>s;
        TreeNode *cur=root;
        while (true)
        {
            if (cur!=NULL)
            {
                s.push(cur);
                cur=cur->left;
            }
            else {
                if (!s.empty())
                {
                    cur=s.top();
                    s.pop();
                    ans.push_back(cur->val);
                    cur=cur->right;
                }
                else break;
            }
        }
        return ans;
    }
};
