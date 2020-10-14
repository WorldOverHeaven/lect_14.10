#ifndef LECT_14_10_TASK2_H
#define LECT_14_10_TASK2_H

#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

vector<int> sort(vector<int> b) {
    auto a = std::move(b);
    sort(a.begin(), a.end());
    sort(a.begin() + a.size() / 2, a.end(), comp);
    return a;
}

#endif //LECT_14_10_TASK2_H
