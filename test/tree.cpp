#include<iostream>
using namespace std;

#include"../lib/tree.h"
using namespace oj;

int main() {
    Tree<int>* root = new Tree<int>();
    root->left = new Tree<int>(1);
    root->right = new Tree<int>(2);
    root->right->left = new Tree<int>(3);
    root->right->right = new Tree<int>(4);
    cout << *root << endl;
    return 0;
}
