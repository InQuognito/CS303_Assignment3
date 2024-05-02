#include "q1.h"
#include "q2.h"
#include "q3.h"

void q1_examples() {
    // This function contains the necessary code for the first part of the assignment
    Queue<int> q_data;

    // Push 10 values into the queue
    for (int i = 1; i <= 10; ++i) {
        q_data.push(i);
    }

    // Display all elements in the queue
    display_queue(q_data);
}

void q2_examples() {
    // This function contains the necessary code for the second part of the assignment
    vector<int> vec = { 1, 2, 3, 4, 5, 3, 6, 7, 8, 3 };
    int target = 3;
    int index = recursive_linear_search(vec, target, vec.size() - 1);
    if (index != -1)
        cout << "Last occurrence of value " << target << " found at index " << index << endl;
    else
        cout << "Desired value could not be found." << endl;
    cout << endl;
}

void q3_examples() {
    // This function contains the necessary code for the third part of the assignment
    list<int> lst = { 12, 11, 13, 5, 6 };
    cout << "List: " << endl;
    for (auto item: lst)
        cout << item << " ";
    cout << endl;
    cout << "Sorted List: " << endl;
    insertion_sort(lst);
    for (auto num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    q1_examples();
    q2_examples();
    q3_examples();
    
    return 0;
}
