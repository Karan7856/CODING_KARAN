// DOUBLY LL
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, int d)
{

    // EMPTY LL
    if (head == NULL)
    {
        Node *node = new Node(d);
        node->next = NULL;
        node->prev = NULL;
        head = node;
    }

    // IF NON EMPTY LL
    Node *node = new Node(d);
    node->next = head;
    head->prev = node;
    head = node;
}

void insertAtTail(Node *&head, int d)
{
    Node *temp = head;
    if (head->next == NULL)
    {
        Node *node = new Node(d);
        head->next = node;
        node->prev = head;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *node = new Node(d);

    temp->next = node;
    node->prev = temp;
}

void insertAtPosition(Node *&head, int pos, int d)
{
    Node *temp = head;
    if (pos == 1)
    {
        insertAtHead(head, d);
    }
    else
    {
        int count = 1;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }
        temp = head;
        Node *node = new Node(d);
        node->next = temp->next;
        temp->next->prev = node;
        temp->next = node;
        node->prev = temp;
    }
}

void deleteAtPosition(Node *&head, int pos)
{
    // DELETION AT HEAD
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;

        delete temp;
    }

    else
    {
        Node *curr = head;
        Node *p = NULL;
        int count = 1;
        while (count < pos)
        {
            p = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            curr->next = NULL;
            curr->prev = NULL;
            delete curr;
            return;
        }
        else
        {
            curr->prev = NULL;
            p->next = curr->next;
            curr->next->prev = p;
            curr->next = NULL;
            delete curr;
        }
    }
}
int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    print(head);
    cout << getLength(head);
    cout << endl;
    insertAtHead(head, 200);
    print(head);
    cout << getLength(head);
    cout << endl;
    insertAtTail(head, 100);
    print(head);

    insertAtTail(head, 1000);
    print(head);

    insertAtPosition(head, 2, 6000);

    print(head);
    insertAtPosition(head, 1, 7000);
    print(head);

    deleteAtPosition(head, 2);
    print(head);
    deleteAtPosition(head, 1);
    print(head);

    deleteAtPosition(head, 3);
    print(head);
    deleteAtPosition(head, 2);
    print(head);
    deleteAtPosition(head, 2);
    print(head);
}