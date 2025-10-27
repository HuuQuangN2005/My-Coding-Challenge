
#include <iostream>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>> n;
    int a1, a2, a3;
    int sum =0;
    for (int i = 0; i< n ;i++){
        cin>> a1 >>a2>>a3;
        sum = (a1+a2+a3 >=2?sum +1: sum );
    }
    cout<<sum;
    return 0;
}