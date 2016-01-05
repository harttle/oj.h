#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

namespace oj{

template<typename T>
ostream & operator<< (ostream & o, const vector<T>& v){
    o << "[";
    for(int i=0; i<v.size(); ++i){
        o << v[i];
        if(i<v.size()-1) o<< ',';
    }
    return o << "]";
}

template<typename T>
istream & operator>>(istream & is, vector<T>& v){
    string s; getline(is, s);
    stringstream ss(s);
    T tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    return is;
}

}
