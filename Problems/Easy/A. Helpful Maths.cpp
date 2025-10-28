#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char,int> mp;
    string s;
    cin>>s;

    for(int i =0; i<s.length();i++){
        mp[s[i]]++;
    }


    for(auto [k,v]:mp){
        if(k != '+'){
            for(int j = 0;j <v;j++){
                cout<<k;
                if(mp['+']-- >0) cout<<"+";
            }
        }
    }
}