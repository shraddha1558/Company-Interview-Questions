// Given a binary tree, find its height.
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
class solution {
    public:
    int maxHeight(TreeNode* root){
        if(root == nullptr)
        return 0;
    int Lheight= maxHeight(root->left);
    int Rheight= maxHeight(root->right);
    return max(Lheight, Rheight)+1;
    }
};
// TC: O(N) SC: O(N)
int main(){
    solution s;
    TreeNode* root= new TreeNode(1);
    root->left= new TreeNode(2);
    root->right= new TreeNode(3);
    root->left->left= new TreeNode(4);
    root->left->right= new TreeNode(5);
    cout<<"Height of tree is : "<<s.maxHeight(root)<<endl;
}