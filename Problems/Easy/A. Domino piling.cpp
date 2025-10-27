#include <iostream>
#include<string>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>> n>>m;

    cout<<int((n*m)/2);
    return 0;
}