#include<bits/stdc++.h>
using namespace std;

class Node
{
    
    int data;
    Node *next;
    public:
    Node()
    {}
    Node(int data, Node *next=NULL)
    {
        this->data=data;
        this->next=next;
    }
    int getData()
    {
        return data;
    }
    Node* getNext()
    {
        return next;
    }

};

class LinkedList: private Node{
    public:
    Node *head;
    void operator<< (int data)
    {
        head = new Node(data,head);
    }
    
    LinkedList()
    {
        head=NULL;
    }
    
    friend void show(Node *head);

};

void show(Node *head)
    {
    
        auto it = head;
        while(it)
        {
            cout<<it->getData()<<" ";
            it= it->getNext();
        }
    }

int main()
{
    LinkedList l;

    l<<2;
    l<<3;
    l<<4;
    l<<1;
    l<<6;

    show(l.head);
}