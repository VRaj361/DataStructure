#include<iostream>
using namespace std;
template <typename T>
    class Node {
    public:
    T data;
    Node* next;

    Node(T data) {
        next = NULL;
        this->data = data;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};
Node<int>* solve(Node<int>* first, Node<int>* second){
	if(first->next==NULL){
		first->next=second;
		return first;
	}
	Node<int> *curr1=first;
	Node<int> *next1=curr1->next;
	Node<int> *curr2=second;
	Node<int> *next2=curr2->next;
	while(next1!=NULL&&curr2!=NULL){
		if(( curr2->data>=curr1->data)&&(curr2->data<=next1->data)){
			//node adition 
			next2=curr2->next;
			curr1->next=curr2;
			curr2->next=next1;
			
			curr1=curr2;
			curr2=next2;
		}else{
			curr1=next1;
			next1=next1->next;
			if(next1==NULL){
				curr1->next=curr2;
				return first;
			}
		}
	}
	return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
	if(first==NULL){
		return second;
	}
	if(second==NULL){
		return first;
	}

	if(first->data<=second->data){
		return solve(first,second);
	}
	else{
		return solve(second,first);
	}
	return first;
}

Node<int>* solve1(Node<int>* first, Node<int>* second){
	if(first->next==NULL){
		first->next=second;
		return first;
	}
	Node<int>* curr1=first;
	Node<int>* next1=curr1->next;
	Node<int>* curr2=second;
	Node<int>* next2=curr2->next;

	//checking for the condition
	while(next1!=NULL&&curr2!=NULL){
		if(curr2->data>=curr1->data&&curr2->data<=next1->data){
			//you need to write a logic 
			next2=curr2->next;
			curr1->next=curr2;
			curr2->next=next1;

			curr1=curr2;
			curr2=next2;
		}else{
			curr1=next1;
			next1=next1->next;
			if(next1==NULL){
				curr1->next=curr2;
				return first;
			}
		}
	}
	return first;

}


Node<int>* sortTwoLists1(Node<int>* first, Node<int>* second){
	if(first==NULL){
		return second;
	}
	if(second==NULL){
		return first;
	}
	if(first->data<=second->data){
		return solve1(first,second);
	}else{
		return solve1(second,first);
	}
	return first;
}


void print(Node<int> *&head)
{
    Node<int> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node<int> *head = new Node<int>(1);
    Node<int> *head1 = new Node<int>(4);
    Node<int> *head2 = new Node<int>(5);
    head->next = head1;
    head1->next = head2;
    
    Node<int> *head4 = new Node<int>(2);
    Node<int> *head5 = new Node<int>(3);
    Node<int> *head6 = new Node<int>(5);
    head4->next = head5;
    head5->next = head6;

    head=sortTwoLists1(head,head4);
    print(head);
    
}