#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n, j, w, res;
    cout << "enter no";
    cin >> n;
    j = n;
    while (j != 0) {
        w = j % 10;
        res = res + w * w * w;
        j = j / 10;
    }
    if (res == n) {
        cout << "armstrong";
    } else {
        cout << "not";
    }
    return 0;
}


