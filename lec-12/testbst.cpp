// testbst.cpp
// Tests intbst.cpp for CS 24 lab

#include "bst.h"

#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v1{64, 128, 8, 512, 256, 32, 16, 4};
    BST bst1;
    BST bst3;
    BST bst4;
    bst4 = bst1 + bst3;
    bst1.insert(v1);

    cout << "  pre-order: ";
    bst1.printPreOrder();
    cout << endl;

    /*
    vector<string> v2{"banana", "apple", "orange"};
    BST bst2;
    bst2.insert(v2);
    cout << "  pre-order: ";
    bst2.printPreOrder();
    cout << endl;
    */
  
    return 0;
}
