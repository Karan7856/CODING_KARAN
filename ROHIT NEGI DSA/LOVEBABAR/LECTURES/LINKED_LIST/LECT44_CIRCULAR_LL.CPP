#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// INSERTION OF A NODE
void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *node = new Node(d);
        tail = node;
        node->next = node;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
            if (curr == tail)
                return; // Element not found
        }

        Node *node = new Node(d);
        node->next = curr->next;
        curr->next = node;
        // Optional: update tail if inserted after tail
        if (curr == tail)
            tail = node;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        // NON-EMPTY
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        // FOR ONE-NODE
        if (curr == prev)
        {
            tail = NULL;
        }
        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

// FIXED PRINT FUNCTION
void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail);
    cout << "(back to start)" << endl;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 1); // Inserting when list is empty
    print(tail);
    insertNode(tail, 1, 4); // Insert after node with data 1
    print(tail);

    insertNode(tail, 1, 7);
    print(tail);

    deleteNode(tail, 1);
    print(tail);

    deleteNode(tail, 4);
    print(tail);

    deleteNode(tail,7);
    print(tail);
}
