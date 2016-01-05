#include<iostream>
using namespace std;

namespace oj {

template<typename T>
class LinkList {
public:
    T val;
    LinkList* next;
    LinkList(T _val = 0): val(_val), next(NULL) {}
};

template<typename T>
ostream& operator<<(ostream& o, LinkList<T>* head){
    while(head){
        o<<head->val;
        if(head->next) o<<"->";
        head = head->next;
    }
    return o;
}

}
