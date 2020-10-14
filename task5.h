#ifndef LECT_14_10_TASK5_H
#define LECT_14_10_TASK5_H

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string delSmile(string c) {
    if (c.size() < 3) {
        return c;
    }

    auto b = c + "aa";

    auto it1 = b.begin();
    auto it2 = b.begin();
    auto it3 = b.begin();

    advance(it2, 1);
    advance(it3, 2);



    string a;

    for (int i = 0; i < b.size() - 2; ++i) {
        if (*it1 == ':' && *it2 == '-' && (*it3 == '(' || *it3 == ')')) {
            i += 2;
            advance(it1, 3);
            advance(it2, 3);
            advance(it3, 3);
            continue;
        }
        advance(it1, 1);
        advance(it2, 1);
        advance(it3, 1);
        a += b[i];
    }

    return a;
}

#endif //LECT_14_10_TASK5_H
