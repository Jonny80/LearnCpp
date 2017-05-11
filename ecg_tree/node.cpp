//
// Created by jonny on 10.05.17.
//

#include "node.h"
#include <string>
#include <iostream>

using namespace std;

node::node() {
    root = NULL;

}

node::knoten* node::Create_child(int key) {
    knoten* n = new knoten;
    n->key = key;
    n->right = NULL;
    n->left = NULL;
    return n;
}


void node::Add_child(int key) {
    Add_child_Private(key,root);
}


void node::Add_child_Private(int key, node::knoten *Ptr) {
    if (root == NULL){
        root = Create_child(key);
    }else if (key < Ptr->key){
        if (Ptr->left != NULL){
            Add_child_Private(key,Ptr->left);
        }
        else{
            Ptr->left = Create_child(key);
        }
    }else if (key > Ptr->key){
        if (Ptr->left != NULL){
            Add_child_Private(key,Ptr->right);
        }
        else{
            Ptr->right = Create_child(key);
        }
    } else{
        cout << "The key " << key << " has already been added to the tree\n";
    }
}