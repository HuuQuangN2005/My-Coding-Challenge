#include <iostream>
#include<string>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>> n;
    string s;
    int sum =0;
    for (int i = 0; i< n ;i++){
        cin>>s;
        if(s[0] == '+' || s[2] =='+' ) sum++;
        if(s[0] == '-' || s[2] =='-' ) sum--;
    }
    cout<<sum;
    return 0;
}