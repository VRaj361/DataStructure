#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *reverseLinkedList(Node *&head)
{
    // base condition
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // Write your code here
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// recursive solution
void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}
Node * reverse1(Node *head){
    //base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *lasthead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    return lasthead;
}
Node *reverseNode(Node *&head)
{
    //approch 1

    // Node *curr = head;
    // Node *prev = NULL;
    // reverse(head, curr, prev);
    // return head;

    //approch 2

    return reverse1(head);

}
void print(Node *&head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    Node *head = new Node(3);
    Node *head1 = new Node(5);
    Node *head2 = new Node(7);
    Node *head3 = new Node(9);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;

    //iterative approch
    // head = reverseLinkedList(head);
    // print(head);

    //recursive approch
    head=reverseNode(head);
    print(head);
}