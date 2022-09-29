#include <iostream>

bool isMultiple(long n, long m);

using namespace std;

int main() {

    long a = 56; long b = 9;
    bool res;

    res = isMultiple(a, b);
    cout << res;

    return 0;
}

bool isMultiple(long n, long m)
{
    if ((n% m) != 0) {
        return false;
    }
    return true;
}