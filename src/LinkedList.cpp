#include "LinkedList.h"
#include "Node.h"
#include <bits/stdc++.h>

using namespace std;

///////////////////
// CONSTRUCTORS  //
///////////////////

/**
 * [Function that creates a new empty list]
*/
LinkedList::LinkedList()
{
    start = NULL;
}

///////////////////
//    GETTERS    //
///////////////////
/**
 * [Function that gets the value of the start node pointer]
 * @return {Node} val [Returns the start node]
 */
Node* LinkedList::getStart(){
    return start;
}

///////////////////
//    SETTERS    //
///////////////////

/**
 * [Function that sets the start index of te list]
 * @param {Node*} index [The index to set]
 */
void LinkedList::setStart(Node* index){
    start = index;
}

/**
 * [Function that sets the start node of te list]
 * @param {Integer} data [The node value]
 */
void LinkedList::insertStart(int data){
    //Creating a new node pointer
    Node* newNode = new Node(data, NULL);

    if(start == NULL){//There are nodes
        //Now start points to the new node
        start = newNode;
    }
    else{ //There are no nodes
        //Inserting new node pointing to NULL
        newNode->setNodePointer(start);
        start = newNode;
    }
}

/**
 * [Function that inserts a node in order into the list]
 * @param {Integer} data [The node value]
 */
void LinkedList::insertOrder(int data) {
	Node* newNode = new Node(data, NULL);
	if (start == NULL) {
		start = newNode;
	}
	else {
		Node* aux = start;
		Node* aux2 = start;
		while (aux != NULL && aux->getNodeValue() < data) {
			aux2 = aux;
			aux = aux->getNodePointer();
		}
		if (aux == aux2) {
			newNode->setNodePointer(aux);
			start = newNode;
		}
		else if (aux == NULL) {
			aux2->setNodePointer(newNode);
		}
		else {
			aux2->setNodePointer(newNode);
			newNode->setNodePointer(aux);
		}

	}

}

/**
 * [Function that sets the end node of te list]
 * @param {Integer} data [The node value]
 */
void LinkedList::insertEnd(int data) {
	Node* newNode = new Node(data, NULL);
	if (start == NULL) {
		start = newNode;
	}
	else {
		Node* aux = start;
		Node* aux2 = start;
		while (aux != NULL) {
			aux2 = aux;
			aux = aux->getNodePointer();
		}
		aux2->setNodePointer(newNode);
	}
}

/**
 * [Function that prints the list]
 */
void LinkedList::printList() {
	Node* aux = start;
	while (aux != NULL) {
		cout << aux->getNodeValue() << "\n";
		//cout << aux->getNodePointer() << "\n";
		aux = aux->getNodePointer();
	}
}


/////////////////////////
//  OPERATOR OVERLOAD  //
/////////////////////////
/**
 * [Operator overload of '<<' to print all the elements in the list]
 */
ostream& operator<< (ostream& output, LinkedList& newNode) {

	if (newNode.getStart() == NULL) {
		return output << "=========================\n|| Linked List is empty  ||\n=========================\n";
	}
	else {
		Node* aux = newNode.getStart();
		Node* aux2 = aux->getNodePointer();
		int cont = 0;
		while (aux2 != NULL) {
			if (cont == 0) {
				output << "=========================\n|| Linked List content ||\n=========================\n";
			}
			output << aux->getNodeValue() << "\n";
			aux = aux->getNodePointer();
			aux2 = aux2->getNodePointer();
			cont++;
		}
		output  << aux->getNodeValue() << "\n";
		return output;
	}
}

///////////////////
//  DESTRUCTOR   //
///////////////////
LinkedList::~LinkedList()
{
    //dtor
}
