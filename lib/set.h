#include<iostream>
#include<sstream>
#include <set>
#include <unordered_set>
using namespace std;

namespace oj{

template<typename T>
istream& operator>>(istream& is, set<T>& st){
    string s; getline(is, s);
    stringstream ss(s);
    T v;
    while(ss>>v){
        st.insert(v);
    } 
    return is;
}
template<typename T>
ostream& operator<<(ostream& o, set<T>& st){
    size_t i = st.size() - 1;
    typename set<T>::iterator it;
    o<<"{";
    for(it = st.begin(); it != st.end(); ++it, --i){
        o<<*it;
        if(i) o<<',';
    } 
    return o<<"}";
}
}
