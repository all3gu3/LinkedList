#include "Node.h"
#include <bits/stdc++.h>

using namespace std;

///////////////////
// CONSTRUCTORS  //
///////////////////

/**
 * [Function that creates a new empty node]
*/
Node::Node(){
    val = 0;
    sig = NULL;
}

/**
 * [Function that creates a new node]
 * @param  {Integer} Nval [Value of the new node]
 * @param  {Pointer} Nsig [Memory location of the new node]
 */
Node::Node(int Nval, Node* Nsig){
    val = Nval;
    sig = Nsig;
}


///////////////////
//    GETTERS    //
///////////////////

/**
 * [Function that gets the value of node]
 * @return {Integer} val [Returns the value of the node]
 */
int Node::getNodeValue(){
    return val;
}

/**
 * [Function that creates a new node]
 * @return {Pointer} sig [Memory location of the next node]
 */
Node* Node::getNodePointer(){
    return sig;
}

///////////////////
//    SETTERS    //
///////////////////

/**
 * [Function that creates a new node]
 * @param {Integer} Nval [Sets the value of the node]
 */
void Node::setValue(int Nval){
    val = Nval;
}

/**
 * [Function that creates a new node]
 * @param {Pointer} Nsig [Memory location of the next node]
 */
void Node::setNodePointer(Node* Nsig){
    sig = Nsig;
}

///////////////////
//  DESTRUCTOR   //
///////////////////
Node::~Node(){
    //dtor
}
