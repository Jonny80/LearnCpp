
#ifndef ECG_TREE_NODE_H
#define ECG_TREE_NODE_H

#include <string>
#include <iostream>

using namespace std;

class node{
public:
    struct node {
        int key;
        node* left;
        node* right;
    };

    node* root;
    string name;
    node(const string&);
    node* addChild(int key);
    string get_name(const string name);
    string set_name(string new_name);
    node* get_child(const int i);
    node* get_nr_children(const int i);

};

#endif //ECG_TREE_NODE_H
