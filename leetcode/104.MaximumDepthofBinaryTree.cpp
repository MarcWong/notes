// Given a binary tree, find its maximum depth.

// The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

// Note: A leaf is a node with no children.

// Example:

// Given binary tree [3,9,20,null,null,15,7],

//     3
//    / \
//   9  20
//     /  \
//    15   7

// return its depth = 3.

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    // TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*--------------------------solution start from here--------------------------------------*/
class Solution {
public:
    int max_depth;
    int maxDepth(TreeNode* root) {
        max_depth = 0;
        search(root, 1);
        return max_depth;
    }
    void search(TreeNode* node, int depth){
        if(!node)
            return;
        if(depth>max_depth)
            max_depth = depth;
        if(node->left){
            search(node->left,depth+1);
        }
        if(node->right){
            search(node->right,depth+1);
        }
    }
};