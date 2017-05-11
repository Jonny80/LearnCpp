#include <iostream>
#include <cstdlib>
#include <string>
#include "node.h"

using namespace std;

int main() {
    int TreeKeys[10] = {50, 76, 21, 4, 5, 2, 5, 7, 2, 1};

    node myTree;

    cout << "Printing the Tree in order\nBefore adding numbers\n";

    myTree.PrintInOrder();

    for (int a = 0; a < sizeof(TreeKeys) / sizeof(TreeKeys[0]); a++) {
        myTree.Add_child(TreeKeys[a]);
    }

    cout << "Printing the Tree in order\nAfter adding numbers\n";

    myTree.PrintInOrder();

    return 0;
}