// SINGLY LINKED LIST
// INSERTION ->> HEAD,TAIL,MIDDLE
// DELETION
#include <iostream>
using namespace std;

// CREATION OF A NODE

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

    // DESTRUCTOR
    int value = this->data;
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
            cout << "Memory is freed with data: " << value << endl;
        }
    }
    
};

void insertAtHead(Node *&head, int d)
{

    // NEW NODE CREATE KARO
    Node *temp = new Node(d);

    // INSERT THE NEW NODE AT HEAD
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{

    // CREATE A NEW NODE
    Node *temp = new Node(d);

    // INSERT AT TAIL
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(int position, Node *&head, Node *&tail, int d)
{

    // IF POSITION IS 1
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // TRAVERSE TILL ONE POSITION BACK OF THE GIVEN POSITION i.e N-1
    Node *temp = head;
    int i = 1;
    int pos = position;
    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }

    // SUPPOSE WE HAVE TO INSERT AT THE LAST POSITION THEN WE HAVE TO UPDATE THE TAIL
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // CREATE A NEW NODE
    Node *new_node = new Node(d);

    // INSERT AT POSITION
    new_node->next = temp->next;
    temp->next = new_node;
}

void deletion(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        int count = 1;
        Node* curr=head;
        Node* prev=NULL;
        while (count < pos)
        {
            
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1; // TAIIL POINTER TO INSERT NODE AT TAIL WHEN WE WANT
    // insertAtHead(head, 20);
    // print(head);
    // cout << endl;
    // insertAtHead(head, 30);
    // print(head);

    // cout<<endl;

    // insertAtTail(tail,40);

    // print(head);

    // cout<<endl;

    // insertAtMiddle(3,head,tail,50);

    // print(head);

    // cout<<endl;

    // insertAtMiddle(1,head,tail,60);
    // print(head);

    // cout<<endl;

    // insertAtMiddle(7,head,tail,70);
    // print(head);

    //insertAtTail(tail, 1);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    print(head);

    deletion(head,4);
    cout<<endl;
    print(head);

    return 0;
}