#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void quicksort(vector<int>& v, int begin, int end){
    if(end-begin<=1) return;

    int pindex = rand()%(end-begin) + begin;
    swap(v[end-1], v[pindex]);

    int pivot = v[end-1];

    int left_end = begin;
    for(int i=begin; i<end-1; i++)
        if(v[i]<pivot) swap(v[i], v[left_end++]);
    swap(v[end-1], v[left_end]);
    quicksort(v, begin, left_end);
    quicksort(v, left_end+1, end);
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);

    quicksort(v, 0, v.size());
    return 0;
}

