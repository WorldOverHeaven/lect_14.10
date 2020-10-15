#ifndef LECT_14_10_TASK6_H
#define LECT_14_10_TASK6_H

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string delSmileAll(string c) {
    if (c.size() < 3) {
        return c;
    }

    auto b = "aaaa" + c + "aaaa";

    auto it1 = b.begin();
    auto it2 = b.begin();
    auto it3 = b.begin();

    advance(it2, 1);
    advance(it3, 2);

    for (int i = 0; i < b.size() - 2; ++i) {
        if (*it1 == ':' && *it2 == '-' && (*it3 == '(' || *it3 == ')')) {
            advance(it1, -3);
            advance(it2, -3);
            advance(it3, -3);
            b.erase(it1 + 3, it1 + 6);
            i -= 4;
            continue;
        }
        advance(it1, 1);
        advance(it2, 1);
        advance(it3, 1);
    }

    b.erase(b.end() - 4, b.end());
    b.erase(b.begin(), b.begin() + 4);

    return b;
}


#endif //LECT_14_10_TASK6_H
