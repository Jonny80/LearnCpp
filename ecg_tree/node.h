//
// Created by jonny on 10.05.17.
//
#ifndef NODE_H_
#define NODE_H_


class node {
private:
    struct knoten{
        int key;
        knoten* left;
        knoten* right;
    };
    knoten* root;
    void Add_child_Private(int key,knoten* Ptr);
    void PrintInOrderPrivate(knoten *Ptr);

    knoten *ReturnNodePrivate(int key, knoten *Ptr);

    int FindSmallestPrivate(knoten *Ptr);

    void RemoveNodePrivate(int key, knoten *parent);

    void RemoveRootMatch();
public:
    node();
    knoten* Create_child(int key);
    void Add_child(int key);
    void PrintInOrder();

    knoten *ReturnNode(int key);

    int ReturnRootKey();

    void PrintChildren(int key);

    int FindSmallest();

    void RemoveNode(int key);
};


#endif //ECG_TREE_NODE_H
