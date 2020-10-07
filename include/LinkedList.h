#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <bits/stdc++.h>

using namespace std;

class LinkedList
{
    int val;   //Node information
	Node* sig;  //Pointer to the next node

    public:
        LinkedList();
        virtual ~LinkedList();

        //getters
	    Node* getStart();
        //setters
        void setStart(Node* begin);
        //functions
        void insertStart(int);
        void insertOrder(int);
        void insertEnd(int);
        void printList();
        //operator overload
        friend ostream& operator << (ostream&, LinkedList&);

    protected:

    private:
        Node* start;
};

#endif // LINKEDLIST_H
