#include <iostream>
#include <map>
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
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// solution is for two loops takes O(n^2)
void uniqueSortedList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    if (head->data != head->next->data && head->next->next == NULL)
    {
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        Node *curr = temp->next;
        Node *prev = temp;
        while (curr != NULL)
        {
            if (curr->data == temp->data)
            {
                if (curr->next == NULL)
                {
                    prev->next = NULL;
                    delete (curr);
                    break;
                }
                prev->next = curr->next;
                curr->next = NULL;
                delete (curr);
                curr = prev->next;
            }
            else
            {
                prev = curr;

                curr = curr->next;
            }
        }
        temp = temp->next;
    } // outer loop
}

// solution is take O(n) time complexity and O(n) space complexity but in most interview they ask for different solution
void uniqueSortedList1(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    else
    {

        Node *temp = head;
        Node *prev = NULL;
        map<int, bool> ch;

        while (temp != NULL)
        {

            if (ch[temp->data] == true)
            {

                prev->next = temp->next;

                Node *e = temp;
                if (temp->next != NULL)
                {
                    temp = temp->next;
                }
                else
                {
                    delete (e);
                    break;
                }

                delete (e);
            }
            else
            {

                ch[temp->data] = true;

                prev = temp;
                if (temp->next != NULL)
                {
                    temp = temp->next;
                }
            }
        }
    }
}
int main()
{
    Node *head = new Node(1);
    Node *head1 = new Node(2);
    Node *head2 = new Node(3);
    Node *head3 = new Node(4);
    Node *head4 = new Node(5);
    Node *head5 = new Node(1);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    // uniqueSortedList(head);
    uniqueSortedList1(head);
    print(head);
}