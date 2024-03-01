#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void printLL(Node *&head){
    Node *temp = head;
    while(temp!=nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

Node *reverseLL(Node *&prev, Node *&curr) {
    if(curr == NULL) {
        return prev;
    }

    Node *forward = curr->next;
    curr->next = prev;

    return reverseLL(curr, forward);

}

Node* printLLReverseRecursion(Node *&head) {
    Node *prev = NULL;
    Node *curr = head;
    prev = reverseLL(prev, curr);
    return prev;
}

int getMiddleOfLL(Node *&head) {
    Node *slow = head;
    Node *fast = head;

    int count = 0;
    while(fast->next != NULL) {
        fast = fast->next;
        if(fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
            count++;
        }
    }
    return count;
}

Node* printLLReverseLoop(Node *&head) {
    Node *curr = head;
    Node *prev = nullptr;
    Node *forward = curr->next;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    //printLL(n1);

    // reverse
    // n1=printLLReverseRecursion(n1);

    //loop
    // n1 = printLLReverseLoop(n1);

    printLL(n1);

    // Get Middle
    cout<<getMiddleOfLL(n1);
}