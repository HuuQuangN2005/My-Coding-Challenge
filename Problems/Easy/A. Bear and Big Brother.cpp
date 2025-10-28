#include <iostream>

#include <math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b;
    cin >> a >> b;

    int t = floor(log(b/a) / log(1.5)) + 1;
    cout << t << "\n";
}