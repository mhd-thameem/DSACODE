#include<bits/stdc++.h>
using namespace std;
    struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void printList(ListNode* head){
    ListNode* temp = head;
while(temp!=nullptr){
    cout<<temp->val<<endl;
    temp=temp->next;
}}
ListNode* reverseList(ListNode* head){
    ListNode* prev=nullptr;
    ListNode* curr=head;
    while(curr!=nullptr){
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }return prev;
}
ListNode* middleOfList(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }return slow;
}
int main(){
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    ListNode* head = n1; 
    head = reverseList(head);
    printList(head);
    head = reverseList(head);
    printList(head);
    head=middleOfList(head);
    printList(head);
return 0;
}