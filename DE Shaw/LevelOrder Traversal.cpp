// Given a root of a binary tree with n nodes, find its level order traversal.
// Level order traversal of a tree is breadth-first traversal for the tree.
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    } 
};
class solution {
    public:
    vector<vector<int>>levelorder(TreeNode* root){
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left !=NULL) q.push(node->left);
                if(node->right !=NULL) q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
// TC: O(N) || SC: O(N)
int main(){
    solution s;
    TreeNode* root = new TreeNode(1);
    //level1
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    //level2
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<vector<int>> result = s.levelorder(root);
    cout<<"Level order Traversal of Tree: "<<endl;
    //Printing levels
    for(vector<int> level : result){
        for(int num: level){
            cout<<num<<" ";
        }
        cout<<endl;
    }

    
}

// Tree structure is:
    //        1
    //     
    //     2     3
    //   
    //   4   5