#include <iostream>
#include<string>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n,m, a;
    cin >> n >> m >> a;
    long long int ans = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << ans << "\n";
  
    
    return 0;
}