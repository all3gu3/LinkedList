#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>
using namespace std;

class Node
{
    int val;   //Node information
	Node* sig;  //Pointer to the next node

    public:
        Node();
        virtual ~Node();
        Node(int, Node*);

        //GETTERS
        int getNodeValue(); 
        Node* getNodePointer();
        //SETTERS
        void setValue(int);
        void setNodePointer(Node*);

    protected:

    private:
};

#endif // NODE_H
