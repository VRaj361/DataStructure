#include<iostream>
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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Deleted Node value is " << val << endl;
    }
};

Node *floydDetectCycle(Node *&head){
    if(head==NULL){
        return NULL;
    }
    Node *slow=head;
    Node *fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

void print(Node *&head){
    Node *temp=head;
    if(head==NULL){
        cout<<"Empty list"<<endl;
    }
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node *getStartingNode(Node *&head){
    if(head==NULL){
        return NULL;
    }
    Node *pickup=floydDetectCycle(head);
    if(pickup==NULL){
        return NULL;
    }
    Node *slow=head;
    while(slow!=pickup){
        slow=slow->next;
        pickup=pickup->next;
    }
    return slow;
}


Node* removeLoop(Node *&head){
    if(head==NULL){
        return NULL;
    }
    Node *temp=getStartingNode(head);
    if(temp==NULL){
        return head;
    }
    Node *start=temp;
    while(start->next!=temp){
        start=start->next;
    }
    start->next=NULL;
    // return start;
    return head;
}

//we are using simply linklist
int main(){

    Node *head=new Node(3);
    Node *head1=new Node(5);
    Node *head2=new Node(7);
    Node *head3=new Node(9);
    Node *head4=new Node(11);
    Node *head5=new Node(13);
    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    head5->next=head2;
    // print(head);
    cout<<"Cycle detect at element "<<floydDetectCycle(head)->data<<endl;
    cout<<"Cycle start element is "<<getStartingNode(head)->data<<endl;
    cout<<removeLoop(head)->data<<endl;;
    print(head);

}