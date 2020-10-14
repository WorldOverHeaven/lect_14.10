#ifndef LECT_14_10_TASK1_H
#define LECT_14_10_TASK1_H

#include <string>

using namespace std;

string reversString(string a) {
    string b(a.rbegin(), a.rend());
    return b;
}

#endif //LECT_14_10_TASK1_H
