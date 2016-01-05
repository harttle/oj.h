#include<iostream>
#include"../lib/link-list.h"
using namespace std;
using namespace oj;

int main() {
    LinkList<int>* head = new LinkList<int>();
    head->next = new LinkList<int>(1);
    head->next->next = new LinkList<int>(2);

    cout << head << endl;
}
