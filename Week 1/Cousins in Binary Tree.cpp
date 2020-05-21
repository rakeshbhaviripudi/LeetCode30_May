/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    
    bool isSiblings(TreeNode* root, int x,int y){
        if(root == NULL) return true;
        
        if(root->left != NULL && root-> right != NULL){
            
            if((root->left->val == x && root->right->val == y) || (root->left->val == y && root->right->val == x))
                return false;
            
        }
        
        return isSiblings(root-> left,x,y) && 
                isSiblings(root->right,x,y); 
    }
    
    int depth(TreeNode* root, int value, int lev ){
        if(root == NULL) return 0;
        if(root-> val == value) return lev;
        
        int l = depth(root->left, value, lev+1);
        if( l != 0 ) return l;
        
        else return depth(root-> right, value, lev+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
    // 1. Depth of x should be same as depth of y
    // 2. x and y should be leaf nodes. 
    // 3. x and y 's parents should not be same.
   if(depth(root,x,1) == depth(root,y,1) && (isSiblings(root,x,y))) return true;
    
    return false;
    }
};
