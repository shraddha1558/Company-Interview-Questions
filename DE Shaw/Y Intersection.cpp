// Given two singly linked lists, return the point where two linked lists intersect.
// Note: If the linked lists do not merge at any point, return -1.
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
    int Intersection(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1==NULL) temp1=head2;
        if(temp2==NULL) temp2=head1;
    }
    return temp1->data;
    }
};
// TC: O(2* max(N,M)) SC: O(1)
int main (){
    Node* head1 = new Node(10);
    Node* second1 = new Node(20);
    Node* third1 = new Node(30);
    Node* fourth1 = new Node(40);
    Node* fifth1 = new Node(50);

    head1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;

    Node* head2 = new Node(15);
    Node* second2 = new Node(25);
    Node* third2 = new Node(35);
    head2->next = second2;
    second2->next = third2;
    //Third node of list 2 joining with fourth node of list1.
    third2->next = fourth1;
    solution s;
    cout<<s.Intersection(head1,head2)<<endl;
}