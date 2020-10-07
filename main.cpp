#include <bits/stdc++.h>
#include "Node.h"
#include "LinkedList.h"


using namespace std;

int main()
{
    Node newNode;
    newNode.setValue(25);

    //cout<<"<"<<newNode.getNodePointer()<<", "<<newNode.getNodeValue()<<">";

    LinkedList theList;
    theList.insertStart(43);
    theList.insertStart(72);
    theList.insertStart(22);
    theList.insertStart(12);
    //theList.insertEnd(32);

    //theList.printList();
    cout<<theList<<"\n";
    return 0;
}
