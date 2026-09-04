#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
bool search(TreeNode* root, int target){
    if(root==nullptr)return false;
    if(root->val==target)return true;
    else if(root->val>target){return search(root->left,target);}
    else{return search(root->right,target);}
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
    cout<<search(c1,6);
    return 0;
}