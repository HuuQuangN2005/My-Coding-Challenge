#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<char> cset;
    string s;
    cin>>s;

    for(int i =0; i<s.length();i++){
        cset.insert(s[i]);
    }


    if(cset.size()%2!=0) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}