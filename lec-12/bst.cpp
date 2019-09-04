// BST.cpp
// Implements class BST
// YOUR NAME(S), DATE

#include <iostream>
#include "bst.h"
using std::cout;

// constructor sets up empty tree

BST::BST() : root(0) { }

// destructor deletes all nodes

BST::~BST() {
    clear(root);
}

// recursive helper for destructor


void BST::clear(Node *n) {
    if (n) {
		clear(n->left);
		clear(n->right);
		delete n;
    }
}

// insert value in tree; return false if duplicate


bool BST::insert(int value) {
    // handle special case of empty tree first
    if (!root) {
	root = new Node(value);
	return true;
    }
    // otherwise use recursive helper
    return insert(value, root);
}

// recursive helper for insert (assumes n is never 0)

bool BST::insert(int value, Node *n) {
    if (value == n->info)
	return false;
    if (value < n->info) {
	if (n->left)
	    return insert(value, n->left);
	else {
	    n->left = new Node(value);
	    n->left->parent = n;
	    return true;
	}
    }
    else {
	if (n->right)
	    return insert(value, n->right);
	else {
	    n->right = new Node(value);
	    n->right->parent = n;
	    return true;
	}
    }
}

// print tree data pre-order


void BST::printPreOrder() const {
    printPreOrder(root);
}

// recursive helper for printPreOrder()


void BST::printPreOrder(Node *n) const {
    if (n) {
	cout << n->info << " ";
	printPreOrder(n->left);
	printPreOrder(n->right);
    }
}



BST::Node* BST::getNodeFor(int value, Node* n) const{
    return NULL; // REPLACE THIS NON-SOLUTION
} 

// returns true if value is in the tree; false if not


bool BST::contains(int value) const {
    return true; // REPLACE THIS NON-SOLUTION
}

BST operator+(const BST& b1, const BST& b2){
    BST b;
    return b;
}
