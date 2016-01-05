#include<iostream>
#include<map>
using namespace std;

namespace oj {

template<typename T>
class Tree {
public:
    T val;
    Tree* left;
    Tree* right;
    Tree(T _val = 0): val(_val), left(NULL), right(NULL) {}
};

template<class T>
ostream& operator<<(ostream& o, const Tree<T>& t) {
    o << t.val << ' ';
    if(t.left) o << *t.left;
    else o << "# ";
    if(t.right) o << *t.right;
    else o << "# ";
    return o;
}

}
