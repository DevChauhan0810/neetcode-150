// LC 104. Maximum Depth of Binary Tree

// Approach 1: Recursive DFS
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0 ;
        }
        return 1 + max(maxDepth(root->left) , maxDepth(root->right)) ;
    }
};

// Approach 2: Iterative DFS (explicit stack)
class Solution2 {
public:
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode* , int>> stack ;
        stack.push({root , 1}) ;
        int res = 0 ;

        while(!stack.empty()){
            pair<TreeNode* , int> curr = stack.top() ;
            stack.pop() ;
            TreeNode* node = curr.first ;
            int depth = curr.second ;

            if(node != nullptr){
                res = max(res , depth) ;
                stack.push({node->left , depth + 1}) ;
                stack.push({node->right , depth + 1}) ;
            }
        }
        return res ;
    }
};