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
public:
    node();
    knoten* Create_child(int key);
    void Add_child(int key);

    void PrintInOrder();
};


#endif //ECG_TREE_NODE_H
