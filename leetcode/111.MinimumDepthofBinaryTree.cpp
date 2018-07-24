// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

// Note: A leaf is a node with no children.

// Example:

// Given binary tree [3,9,20,null,null,15,7],

//     3
//    / \
//   9  20
//     /  \
//    15   7

// return its minimum depth = 2.

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
#include<climits>

class Solution {
public:
    int min_depth;
    int minDepth(TreeNode* root) {
        min_depth = INT_MAX;
        search(root, 1);
        return min_depth;
    }
    void search(TreeNode* node, int depth){
        if(!node){
            if(depth==1)
                min_depth = 0;
            return;
        }
        if(!node->left && !node->right)
            if(depth < min_depth)
                min_depth = depth;

        search(node->left,depth+1);
        search(node->right,depth+1);
    }
};