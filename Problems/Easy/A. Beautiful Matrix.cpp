#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 0, j = 0;
    int n;
    while(cin >> n){
        if(n == 1){
            break;
        }
        else{
            j++;
            if(j == 5){   
                i++;
                j = 0;
            }
        }
    }

    cout << abs(2 - i) + abs(2 - j) << "\n";
    return 0;
}
