#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr){}
};
int maxHeightOfTree(TreeNode* root){
    if(root==nullptr)return 0;
    int left=maxHeightOfTree(root->left);
    int right=maxHeightOfTree(root->right);
    return 1+max(left,right);
}
int main(){
    TreeNode* c1=new TreeNode(1);
    TreeNode* c2=new TreeNode(2);
    TreeNode* c3=new TreeNode(3);
    TreeNode* c4=new TreeNode(4);
    TreeNode* c5=new TreeNode(5);
    TreeNode* c6=new TreeNode(6);
    c1->left=c2;
    c1->right=c3;
    c2->left=c4;
    c2->right=c5;
    c3->right=c6;
    cout<<maxHeightOfTree(c1);
    return 0;
}