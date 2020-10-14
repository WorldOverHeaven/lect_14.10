#ifndef LECT_14_10_TASK4_H
#define LECT_14_10_TASK4_H

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string delSpace(string b) {
    auto it1 = b.begin();
    auto it2 = b.begin();

    string a;

    for (int i = 0; i < b.size() - 1; ++i) {
        ++it2;
        if (*it1 == ' ' && *it2 == ' ') {
            ++it1;
            continue;
        }
        ++it1;
        a += b[i];
    }
    if (b[b.size() - 1] != ' ') {
        a += b[b.size() - 1];
    }
    return a;
}

#endif //LECT_14_10_TASK4_H
