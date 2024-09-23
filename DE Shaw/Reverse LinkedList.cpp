// Given the head of a singly linked list, reverse the list, and return the reversed list.
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;        
    Node* next;      
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
class solution {
    public:
    int reverseList(Node* head){
        Node* temp=head;
        Node* prev=nullptr;
        while(temp!=NULL){
            Node* front= temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev->data;
    }
};
// TC: O(N) SC: O(1)
int main(){
    solution s;
    Node* head = new Node(100);
    Node* second = new Node(200);
    Node* third = new Node(300);
    Node* fourth = new Node(400);
    Node* fifth = new Node(1558);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next = NULL; 
    cout<<"Reversed list Head is "<<s.reverseList(head)<<endl;
}