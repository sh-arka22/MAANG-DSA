class Solution {
private:
    void bfs(TreeNode* root, vector<int>&ans){
        deque<TreeNode*> mem;
        mem.push_front(root);

        while(mem.size()>0){
            int sz = mem.size();
            ans.push_back(mem.back()->val);
            while(sz-->0){
                TreeNode* parr = mem.front();
                mem.pop_front();
                if(parr->left != nullptr){
                    mem.push_back(parr->left);
                }
                if(parr->right != nullptr){
                    mem.push_back(parr->right);
                }
            }
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr){
            return {};
        }
        vector<int>ans;
        bfs(root,ans);
        return ans;
    }
};