#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr){}
};
void BFS(TreeNode* root){
    if(root==nullptr){return;}
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();
        cout<<curr->val<<" ";
        if(curr->left!=nullptr){q.push(curr->left);}
        if(curr->right!=nullptr){q.push(curr->right);}
    }
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
    BFS(c1);
    return 0;
}