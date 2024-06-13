#include <iostream>
#include <string>
using namespace std;

class node {
    public:
       string info;
       node* leftchild;
       node* rightchild;

       // constructor rof the node class
       node(string i, node* l, node* r) {
        info = 1;
        leftchild = l;
        rightchild = r;
       }
};

class binarytree {
    public:
       node* ROOT;

       binarytree() {
        ROOT = nullptr; //initializing ROOT to null
       }

       void insert (string element ) { // insert a node in the binary search tree 
         node* newnode = new node(element, nullptr, nullptr); // allocate memory for the new node
         newnode->info = element; // assign value to the data field of the new data
         newnode->leftchild = nullptr; // make the left child of the new node point to NULL
         newnode->rightchild = nullptr; // make the right child of the new data point to NULL

       

};