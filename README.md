# OJ.H

oj.h is a Online Judge Toolkit to speed-up your problem solving.

`oj.h` is a template library containing a batch of basic algrithms and data structures with `cin`/`cout` support (for debug purpose).

## Basic Usage

Donwload this repo and include `oj.h` in your program,
All OJ templates are available in `oj` namespace. 
For example, vector reading and printing:

```cpp
#include "oj.h"
using namespace oj;

int main() {
    vector<int> v;
    // input: 2 1 3 4
    cin >> v;
    // output: [2,1,3,4]
    cout << v << endl;
    return 0;
}
```

> All functionalities are provided via C++ template, 
> so there's no need to build this lib.

## CIN Utility

With `oj.h`, you can declare and read-in a variable in a single line.

```cpp
// equivalent to: int x; cin>>x;
int x = get<int>();
// equivalent to: int str; cin>>str;
string str = get<string>();
```

## Vector

`vector` template is provided by STL. 
While `oj.h` provides `cin` and `cout`:

```cpp
vector<int> v;
// input: 1 3 2
cin >> v;
// output: [1,3,2]
cout << v << endl;
```

## Pair

`cin` and `cout` for `pair`:

```cpp
pair<int, char> p;
// input: 1 a
cin >> p;
// output: <1,a>
cout << p << endl;
```

## Map

`cin` and `cout` for `map`:

```cpp
map<int, char> mp;
// input: 1 a 2 b 3 c
cin >> mp;
// output: {<1,a>,<2,b>,<3,c>}
cout << mp << endl;
```

## Set

`cin` and `cout` for `set`:

```cpp
set<int> st;
// input: 2 3 1
cin >> st;
// output: {1,2,3}
cout << st << endl;
```

## Link List

`LinkList` is a basic link list implementation with `cout` support. 

```cpp
LinkList<int>* head = new LinkList<int>();
head->next = new LinkList<int>(1);
head->next->next = new LinkList<int>(2);

// output: 0->1->2
cout << head << endl;
```

## Tree

`Tree` is a basic binary tree implementation.

> cout of tree nodes follows DFS order, `#` indicates `NULL`.

```cpp
Tree<int>* root = new Tree<int>();
root->left = new Tree<int>(1);
root->right = new Tree<int>(2);
root->right->left = new Tree<int>(3);
root->right->right = new Tree<int>(4);
// output: 0 1 # # 2 3 # # 4 # #
cout << *root << endl;
```

## Algrithms

`algos/` directory contains basic algrithms:

* `quicksort`: Quick sort, random pivot enhanced.
* `mergesort`: Merge sort.

## Run Test

Go to `test/` directory and run `make`. 
All test cases will be compiled and executed with corresponding input.

## Contribute

All contributions are welcome. You can either provide more algrithms in `algos/` directory, or provide additional functionalities in `lib/` directory.

> All OJ functionalities should be in `oj` namespace.

