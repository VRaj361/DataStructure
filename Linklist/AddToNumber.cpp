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
Node *addToNumber(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    int n=0,c=0;
    // reverse the number
    Node *temp = first;
    Node *next = NULL;
    Node *prev = NULL;
    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }

    first = prev;
    temp = second;
    next = NULL;
    prev = NULL;
    while (temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    second = prev;

    // add two number traverse
    temp=new Node(-1);
    Node *f=temp;
    Node *ta=temp;
    
    while (first != NULL || second != NULL)
    {
        
        if (first != NULL && second != NULL)
        {
            
            int d = first->data + second->data+c;
			n=(first->data+second->data+c)/10;
                
                Node *t=new Node(d%10);
            if(temp==NULL){
                temp=t;
            }else{
            ta->next=t;
            ta=ta->next;
            }
           
            first = first->next;
            second = second->next;
        }
        else if (first != NULL)
        {
           
            int d = first->data +c;
			n=(first->data+c)/10;
                
                Node *t=new Node(d%10);
            if(temp==NULL){
                temp=t;
            }else{
            ta->next=t;
            ta=ta->next;
            }
            
            first = first->next;
        }
        else if (second != NULL)
        {
            
            int d = second->data+c;
			n=(second->data+c)/10;
                
                Node *t=new Node(d%10);
            if(temp==NULL){
                temp=t;
            }else{
            ta->next=t;
            ta=ta->next;
            }
            
            second = second->next;
        }
        c=n;
       
        
    }
    if(n>0){
        Node *t=new Node(n);
        ta->next=t;
        ta=ta->next;
    }

    // reverse last time
    prev = NULL;
    next = NULL;

    while (f!= NULL)
    {
        next = f->next;
        f->next = prev;
        prev = f;
        f = next;
    }
   
    return prev;
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
        while (temp->next != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    Node *head = new Node(2);
    Node *head1 = new Node(9);
    Node *head2 = new Node(9);

    Node *head3 = new Node(9);
    Node *head4 = new Node(9);
    Node *head5 = new Node(9);

    head->next = head1;
    head1->next = head2;

    head3->next = head4;
    head4->next = head5;
    head = addToNumber(head, head3);

    print(head);
}