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

    auto b = c + "aa";

    auto it1 = b.begin();
    auto it2 = b.begin();
    auto it3 = b.begin();

    advance(it2, 1);
    advance(it3, 2);

    for (int i = 0; i < b.size() - 2; ++i) {
        if (*it1 == ':' && *it2 == '-' && (*it3 == '(' || *it3 == ')')) {
            if (i >= 3) {
                i += -4;
                advance(it1, -3);
                advance(it2, -3);
                advance(it3, -3);
            }
            b.erase(it1 + 3, it3 + 4);
            continue;
        }
        advance(it1, 1);
        advance(it2, 1);
        advance(it3, 1);
    }

    b.erase(b.end() - 2, b.end());

    return b;
}


#endif //LECT_14_10_TASK6_H
