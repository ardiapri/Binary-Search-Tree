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

       

};