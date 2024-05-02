#ifndef q3
#define q3

#include <iostream>
#include <list>

using namespace std;

void insertion_sort(list<int>& lst) {
    for (auto it = next(lst.begin()); it != lst.end(); ++it) {
        int key = *it;
        auto prev_iter = it;
        while (prev_iter != lst.begin() && *prev(prev_iter) > key) {
            *prev_iter = *prev(prev_iter);
            --prev_iter;
        }
        *prev_iter = key;
    }
}

#endif
