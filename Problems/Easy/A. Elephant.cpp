#include <iostream>
#include<string>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int x;
    cin >> x;
    long long int ans = ((x + 5 - 1) / 5) ;
    cout << ans << "\n";
  
    
    return 0;
}