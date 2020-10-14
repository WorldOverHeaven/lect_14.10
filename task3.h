#ifndef LECT_14_10_TASK3_H
#define LECT_14_10_TASK3_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

void minMax(int k, const vector<int> a) {
    map<int, int> mp;
    for (int i = 0; i < a.size(); ++i) {
        mp[a[i]] = a[i];
    }
    auto it = mp.begin();
    cout << "MIN" << endl;
    for (int i = 0; i < k; ++i) {
        cout << it->second << endl;
        advance(it, 1);
    }
    it = mp.end();
    cout << "MAX" << endl;
    for (int i = 0; i < k; ++i) {
        advance(it, -1);
        cout << it->second << endl;
    }
}

#endif //LECT_14_10_TASK3_H
