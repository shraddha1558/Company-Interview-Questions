// Given a doubly linked list. 
// Your task is to reverse the doubly linked list and return its head.
#include<bits/stdc++.h>
using namespace std;
class DLLNode {
public:
    int data;
    DLLNode* next;
    DLLNode* prev;
    DLLNode(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
class solution {
public:
    DLLNode* reverseDLL(DLLNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        DLLNode* currNode = head;
        DLLNode* temp = NULL;
        while (currNode != NULL) {
            temp = currNode->prev;
            currNode->prev = currNode->next;
            currNode->next = temp;
            currNode = currNode->prev;
        }
        if (temp != NULL) {
            head = temp->prev;
        }

        return head;
    }
    void printList(DLLNode* node) {
        while (node != nullptr) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};
//TC: O(N) || SC: O(N)
int main()
{
    DLLNode* head = new DLLNode(1);
    head->next = new DLLNode(2);
    head->next->prev = head;
    head->next->next = new DLLNode(3);
    head->next->next->prev = head->next;
    head->next->next->next = new DLLNode(4);
    head->next->next->next->prev = head->next->next;
    solution s;
    cout << "Original Linked list" << endl;
    s.printList(head);
    head = s.reverseDLL(head);
    cout << "\nReversed Linked list" << endl;
    s.printList(head);
}