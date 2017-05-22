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
        if (Ptr->right != NULL){
            Add_child_Private(key,Ptr->right);
        }
        else{
            Ptr->right = Create_child(key);
        }
    } else{
        cout << "The key " << key << " has already been added to the tree\n";
    }
}

void node::PrintInOrder() {
    PrintInOrderPrivate(root);
}

void node::PrintInOrderPrivate(knoten *Ptr) {
    if (root != NULL) {
        if (Ptr->left != NULL) {
            PrintInOrderPrivate(Ptr->left);
        }
        cout << Ptr->key << " ";
        if (Ptr->right != NULL) {
            PrintInOrderPrivate(Ptr->right);
        }
    } else {
        cout << "The Tree is empty\n";
    }
}

node::knoten *node::ReturnNode(int key) {
    return ReturnNodePrivate(key, root);
}

node::knoten *node::ReturnNodePrivate(int key, knoten *Ptr) {
    if (Ptr != NULL) {
        if (Ptr->key == key) {
            return Ptr;
        } else {
            if (key < Ptr->key) {
                return ReturnNodePrivate(key, Ptr->left);
            } else {
                return ReturnNodePrivate(key, Ptr->right);
            }
        }
    } else {
        return NULL;
    }
}

int node::ReturnRootKey() {
    if (root != NULL) {
        return root->key;
    } else {
        return -1000;
    }
}

void node::PrintChildren(int key) {
    knoten *Ptr = ReturnNode(key);

    if (Ptr != NULL) {
        cout << "Parent Node= " << Ptr->key << endl;
        Ptr->left == NULL ?
        cout << "Left Child = NULL\n" :
        cout << "Left Child = " << Ptr->left->key << endl;

        Ptr->right == NULL ?
        cout << "Right Child = NULL\n" :
        cout << "Right Child = " << Ptr->right->key << endl;
    } else {
        cout << "Key " << key << " is not in the Tree\n";
    }
}

int node::FindSmallest() {
    return FindSmallestPrivate(root);
}

int node::FindSmallestPrivate(node::knoten *Ptr) {
    if (root == NULL) {
        cout << "The tree is empty\n";
        return -1000;
    } else {
        if (Ptr->left != NULL) {
            return FindSmallestPrivate(Ptr->left);
        } else {
            return Ptr->key;
        }
    }
}


void node::RemoveNode(int key) {
    RemoveNodePrivate(key, root);
}

void node::RemoveNodePrivate(int key, knoten *parent) {
    if (root != NULL) {
        if (root->key == key) {
            //RemoveMatch();
        } else {
            if (key > parent->key && parent->left != NULL) {
                parent->left->key == key ?
                //RemoveMatch(parent, parent->left, true);
                //RemoveNodePrivate(key, parent->left);
            } else if (key > parent->key && parent->right != NULL) {
                parent->left->key == key ?
                //RemoveMatch(parent, parent->right, false);
                //RemoveNodePrivate(key, parent->right);
            } else {
                cout << "The key " << key << " was not found in the Tree\n";
            }
        }
    } else {
        cout << "The Tree is empty\n";
    }

}

void node::RemoveRootMatch() {
    if (root != NULL) {
        knoten *delPtr = root;
        int rootKey = root->key;
        int smallestInRightSubtree;

        if (root->left == NULL && root->right == NULL) {
            root == NULL;
            delete delPtr;
        } else if (root->left == NULL && root->right != NULL) {
            root = root->right;
            delPtr->right = NULL;
            delete delPtr;
            cout << "The root node with key " << rootKey << " was deleted. \n" << "The new root contains key " <<
                 root->key << endl;
        } else if (root->right == NULL && root->left != NULL) {
            root = root->left;
            delPtr->left = NULL;
            delete delPtr;
            cout << "The root node with key " << rootKey << " was deleted. \n" << "The new root contains key " <<
                 root->key << endl;
        } else {
            smallestInRightSubtree = FindSmallestPrivate(root->right);
            RemoveNodePrivate(smallestInRightSubtree, root);
            root->key = smallestInRightSubtree;
            cout << "The root key containing key" << rootKey << " was overwritten with key " << root->key << endl;
        }
    } else {
        cout << "Can not remove root. The tree is empty\n";
    }
}





