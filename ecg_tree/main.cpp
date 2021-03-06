#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>
#include <unistd.h>
#include "node.h"

using namespace std;

int main() {
    int TreeKeys[12] = {2, 21, 23, 44, 25, 62, 73, 86, 9, 12, 68, 66};

    node myTree;

    cout << "Printing the Tree in order\nBefore adding numbers\n";

    for (int i = 0; i < sizeof(TreeKeys) / sizeof(TreeKeys[0]); ++i) {
        myTree.Add_child(TreeKeys[i]);
    }

    cout << "Printing the Tree in order\nAfter adding numbers\n";

    myTree.PrintInOrder();

    cout << "\n" << "The smallest value in the Tree is " << myTree.FindSmallest();

    return 0;
}