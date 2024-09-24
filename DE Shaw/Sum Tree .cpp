// Given a Binary Tree. Check for the Sum Tree for every node except the leaf node. 
// Return true if it is a Sum Tree otherwise, return false.
// A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. 
// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. 
// A leaf node is also considered a Sum Tree.
#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class solution {
public:
    int sum(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return sum(root->left) + root->data + sum(root->right);
    }
    bool isSumTree(TreeNode* root) {
        int lsum, rsum;
        if (root == nullptr || (root->left == nullptr && root->right == nullptr))
            return true;
        lsum = sum(root->left);
        rsum = sum(root->right);
        if ((root->data == lsum + rsum) && isSumTree(root->left) && isSumTree(root->right))
            return true;

        return false;
    }

};
//TC: O(N^2) || SC: O(N)
int main() {
    TreeNode* root = new TreeNode(26);
    root->left = new TreeNode(10);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->right->right = new TreeNode(3);
    solution s;
    cout << s.isSumTree(root) << endl;
}
// create hard coded tree
    //       26
    //     
    //     10   3
    //  
    //   4  6     3