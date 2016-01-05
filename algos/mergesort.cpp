#include <iostream>
#include <vector>
using namespace std;

void mergesort(vector<int>& v, int begin, int end){
    if(end-begin<=1) return;

    int mid = (end+begin)/2;
    mergesort(v, begin, mid);
    mergesort(v, mid, end);

    vector<int> v1(v.begin()+begin, v.begin()+mid);
    vector<int> v2(v.begin()+mid, v.begin()+end);
    unsigned int i = begin, i1 = 0, i2 = 0;

    while(i1<v1.size() && i2<v2.size()){
        if(v1[i1]<=v2[i2]) v[i++] = v1[i1++];
        else v[i++] = v2[i2++];
    }
    while(i1<v1.size()) v[i++] = v1[i1++];
    while(i2<v2.size()) v[i++] = v2[i2++];
}

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(8);
    v.push_back(9);

    mergesort(v, 0, v.size());
    return 0;
}

