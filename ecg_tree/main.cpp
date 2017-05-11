#include <iostream>
#include <cstdlib>
#include <string>
#include "node.h"

using namespace std;

int main() {
    int TreeKeys[12] = {50, 76, 21, 4, 15, 5, 7, 2, 1234, 345345, 123123};

    node myTree;

    cout << "Printing the Tree in order\nBefore adding numbers\n";

    myTree.PrintInOrder();

    for (int a = 0; a < 12; a++) {
        myTree.Add_child(TreeKeys[a]);
    }

    cout << "Printing the Tree in order\nAfter adding numbers\n";
    cout << sizeof(TreeKeys) / sizeof(TreeKeys[0]) << endl;


    myTree.PrintInOrder();

    return 0;
}