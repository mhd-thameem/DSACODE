#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
void preorder(TreeNode* root){
    if(root==nullptr){return;}
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
TreeNode* insert(TreeNode* root, int val){
    if(root==nullptr)return new TreeNode(val);
    if(root->val>val){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
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
    insert(c1,6);
    preorder(c1);
    return 0;
}