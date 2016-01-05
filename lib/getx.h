#include <iostream>
#include <string>

namespace oj {

using namespace std;

template<typename T> 
T get(istream & is = cin) {
    T val;
    is >> val;
    return val;
}

}
