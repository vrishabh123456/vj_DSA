#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node * next;
};

class LinkedList
{
public:
    Node* head = NULL;

    void addAtLast (int val)
    {
        Node* newnode = new Node();
        newnode->val = val;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;

        } else

        {
            Node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void addAtFront (int val)
    {
        Node* newnode = new Node();
        newnode->val = val;
        newnode->next = NULL;

        newnode->next = head;
        head = newnode;
    }

    void printLinkedList ()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList list;

    list.addAtLast (5);
    list.addAtLast (10);
    list.addAtLast (15);
    list.addAtFront (0);
    list.addAtLast (20);

    list.printLinkedList();
}