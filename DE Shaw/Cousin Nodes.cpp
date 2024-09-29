// You are given a Binary Tree and also given two values of two nodes and both are unique in nature. 
// Determine whether the two nodes are cousins of each other.
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        left= nullptr;
        right= nullptr;
        data=val;
    }
};
class solution {
    public:
    bool isSibling(TreeNode* root, int a, int b){
        if(root== nullptr) return false;
        if(root->left != nullptr && root->right != nullptr && root->left->data== a && root->right->data == b )
        return true;
        if(root->left != nullptr && root->right != nullptr && root->left->data== b && root->right->data == a )
        return true;

        return isSibling(root->left,a,b) || isSibling(root->right,a,b);
    }
    int Treelevel(TreeNode* root, int value, int level){
        if(root ==NULL)
        return 0;
        if(root->data==value)
        return level;
        int l=Treelevel(root->left, value, level+1);
        if(l!=0)
        return l;

        return Treelevel(root->right, value, level+1);
    }
    bool isCousin(TreeNode* root, int a, int b){
        if(a==b)
        return false;
        int alevel=Treelevel(root,a,1);
        int blevel=Treelevel(root,b,1);
        if(alevel == 0 || blevel == 0)
        return false;
        if (alevel == blevel && !isSibling(root, a, b))
        return true;
        else
        return false;
    }
};
// TC: O(N) || SC: O(H)
int main(){
    solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    int a = 4, b = 5;
    
    if (s.isCousin(root, a, b)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}

 // create hard coded tree
    //       1
    //    
    //    2     3
    //   
    //  5         4 