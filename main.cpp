#include <iostream>
#include <string>
#include "vector"
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

using namespace std;

int main() {
    string s = "aaa::-(-)a";
    auto a = delSmileAll(s);
    cout << a << endl;
    return 0;
}
