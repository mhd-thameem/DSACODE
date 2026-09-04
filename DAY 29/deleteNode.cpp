#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
int findMin(TreeNode* root){
    if(root->left==nullptr)return root->val;
    return findMin(root->left);
}
void preorder(TreeNode* root){
    if(root==nullptr)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
TreeNode* deleteNode(TreeNode* root,int key){
    if(root==nullptr)return nullptr;
    if(root->val>key){
        root->left=deleteNode(root->left,key);
    }else if(root->val<key){
        root->right=deleteNode(root->right,key);
    }else{
        if(root->left==nullptr){
            TreeNode* temp=root->right;
            delete root;
            return temp;
        }else if(root->right==nullptr){
            TreeNode* temp=root->left;
            delete root;
            return temp;
        }else{
            int successorVal=findMin(root->right);
            root->val=successorVal;
            root->right=deleteNode(root->right,successorVal);
        }
    }return root;
}
int main(){
    TreeNode* c1=new TreeNode(5);
    TreeNode* c2=new TreeNode(3);
    TreeNode* c3=new TreeNode(8);
    TreeNode* c4=new TreeNode(1);
    TreeNode* c5=new TreeNode(4);
    TreeNode* c6=new TreeNode(9);
    c1->left=c2;
    c1->right=c3;
    c2->left=c4;
    c2->right=c5;
    c3->right=c6;
    preorder(c1);
    deleteNode(c1,4);
    preorder(c1);
    return 0;
}
