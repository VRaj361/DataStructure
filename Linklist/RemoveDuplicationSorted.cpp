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
    // ~Node()
    // {
    //     int val = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Deleted Node value is " << val << endl;
    // }
};
Node *uniqueSortedList(Node *&head)
{
    // Write your code here.
    // base case - not contain any element
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        // contain elements
        Node *curr = head;
        while (curr != NULL)
        {

            if (curr->next != NULL && curr->data == curr->next->data)
            {
                Node *temp = curr->next->next;
                Node *del = curr->next;
                delete (del);
                curr->next = temp;
            }
            else
            {
                curr = curr->next;
            }
        }
    }
    return head;
}
void print(Node *& head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(1);
    Node *head1 = new Node(2);
    Node *head2 = new Node(2);
    Node *head3 = new Node(3);
    Node *head4 = new Node(3);
    Node *head5 = new Node(3);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head=uniqueSortedList(head);
    print(head);   
}