#ifndef OJ_PAIR
#define OJ_PAIR
#include<iostream>
using namespace std;

namespace oj {

template<typename T1, class T2>
istream & operator>> (istream & is, pair<T1, T2>& p) {
    T1 k;
    T2 v;
    is >> k >> v;
    p.first = k;
    p.second = v;
    return is;
}

template<typename T1, typename T2>
ostream & operator<< (ostream & o, pair<T1, T2>& p) {
    return o << '<' << p.first << "," << p.second << '>';
}

}
#endif
