#include <iostream>
#include <sstream>
#include <map>
#include <unordered_map>
#include "./pair.h"

namespace oj {

using namespace std;

template<typename T1, typename T2>
istream & operator>>(istream & is, map<T1, T2>& m) {
    string s;
    getline(is, s);
    stringstream ss(s);
    T1 k;
    T2 v;
    while(ss >> k >> v){
        m[k] = v;
    } 
    return is;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& o, const map<T1, T2>& c) {
    o << "{";
    for(auto pr : c) o << pr << ' ';
    return o << "\b}";
}


}
