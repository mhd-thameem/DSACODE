#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
bool isSameTree(TreeNode* p, TreeNode* q){
    if(q==nullptr && p==nullptr)return true;
    if(  q==nullptr || p==nullptr)return false;
    return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}
int main(){
    TreeNode* c1=new TreeNode(1);
    TreeNode* c2=new TreeNode(2);
    TreeNode* c3=new TreeNode(3);
    TreeNode* c4=new TreeNode(1);
    TreeNode* c5=new TreeNode(2);
    TreeNode* c6=new TreeNode(3);
    c1->left=c2;
    c1->right=c3;
    c4->left=c5;
    c4->right=c6;
    cout<<isSameTree(c1,c4);
    return 0;
}