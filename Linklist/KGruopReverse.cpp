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
Node* kReverse(Node* head, int k) {
    // Write your code here.
	if(head==NULL){
		return NULL;
	}
	
	//reverse the kth nodes
	Node *prev=NULL;
	Node *curr=head;
	Node *next=NULL;
	int count=0;
	while(curr!=NULL && count<k){
		//4 step
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		count++;
	}
	
	//recursive call
	if(next!=NULL){
		head->next=kReverse(next,k);
	}
	
	//return the node
	return prev;
}
void print(Node *&head){
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
    //1 2 3 4 5 6 -1
    Node *head=new Node(1);
    Node *head1=new Node(2);
    Node *head2=new Node(3);
    Node *head3=new Node(4);
    Node *head4=new Node(5);
    Node *head5=new Node(6);
    Node *head6=new Node(-1);
    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    head5->next=head6;
    head=kReverse(head,2);  
    print(head);

}