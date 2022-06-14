#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node* findMid(node *head){
	node *slow=head;
	node *fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
} 

node *merge(node *left,node*right){
	if(left==NULL){
		return right;
	}
	if(right==NULL){
		return left;
	}
	node *ans=new node(-1);
	node *temp=ans;
	while(left!=NULL&&right!=NULL){
		if(left->data<right->data){
			temp->next=left;
			temp=left;
			left=left->next;
		}else{
			temp->next=right;
			temp=right;
			right=right->next;
		}
	}
	while(left!=NULL){
			temp->next=left;
			temp=left;
			left=left->next;
	}
	while(right!=NULL){
		temp->next=right;
		temp=right;
		right=right->next;
	}
	ans=ans->next;
	return ans;
}
node* mergeSort(node *head) {
    // Write your code here.
	if(head==NULL||head->next==NULL){
		return head;
	}
	node *mid=findMid(head);
	node *first=head;
	node *second=mid->next;
	mid->next=NULL;
	
	first=mergeSort(first);
	second=mergeSort(second);
	
	head=merge(first,second);
	return head;
	
}
void print(node *&head){
    node *temp = head;
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
    node *head = new node(5);
    node *head1 = new node(3);
    node *head2 = new node(9);
    node *head3 = new node(7);
   
    // Node *head4 = new Node(15);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    print(head);
    head=mergeSort(head);
    print(head);
}