// Given the head of a singly linked list, the task is to check if the linked list has a loop. 
// A loop means that the last node of the linked list is connected back to a node in the same list.  
// So if the next of the last node is null. then there is no loop.
// Note: You need to return a boolean value true if there is a loop, otherwise false.

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
    bool hasloop(Node* Head){
        Node* slow=Head;
        Node* fast=Head;
        while(fast!=nullptr && fast->next !=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};

// TC: O(N) SC: O(1)
int main() {
    solution s;
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; 

    if (s.hasloop(head)) {
        cout << "Loop Detected" << endl;
    } else {
        cout << "Loop not present" << endl;
    }
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}