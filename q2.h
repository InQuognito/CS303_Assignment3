#ifndef q2
#define q2

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int recursive_linear_search(const vector<T>& vec, const T& target, int index) {
    if (index < 0)
        return -1;
    if (vec[index] == target)
        return index;
    return recursive_linear_search(vec, target, index - 1);
}

#endif
