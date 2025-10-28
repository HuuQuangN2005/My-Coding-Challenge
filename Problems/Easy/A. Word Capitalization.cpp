#include<iostream>
#include <cctype>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    s[0] = char(toupper(int(s[0])));
    cout<<s;


}