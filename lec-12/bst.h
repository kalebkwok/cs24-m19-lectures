// bst.h


#ifndef BST_H
#define BST_H

#include <iostream>

using namespace std;

class BST {

 public:
    BST();                   // constructor
    ~BST();                  // destructor
    bool insert(int value);     // insert value; return false if duplicate
    bool contains(int value) const;  // true if value is in tree
    void printPreOrder() const;
 private:

    struct Node {
	   int info;
	   Node *left, *right, * parent;
	   // useful constructor:
        Node(int v=0) : info(v), left(0), right(0), parent(0) { }
    };

    // just one instance variable (pointer to root node):
    Node* root;

    // recursive utility functions for use by public methods above
    Node* getNodeFor(int value, Node* n) const; // IMPLEMENT THIS FIRST: returns the node for a given value or NULL if none exists
    void printPreOrder(Node *n) const;
    void clear(Node *n); // for destructor
    bool insert(int value, Node *n); // note overloading names for simplicity
    
};

BST operator+(const BST& b1, const BST& b2);


#endif
