#include<iostream>
#include<string>
using namespace std;

#include"../lib/getx.h"
using namespace oj;

int main() {
    int x = get<int>();
    cout << x << endl;
    string str = get<string>();
    cout << str <<endl;
    return 0;
}
