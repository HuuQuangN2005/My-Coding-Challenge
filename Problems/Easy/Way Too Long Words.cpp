#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string word;
    int count;
    for (int i = 0 ; i<n; i++){
        cin>>word;
        count = word.length();
        if(count>10){
          cout << word[0] << (count - 2) << word[count - 1] << "\n";
        }
        else cout <<word << "\n";
        
    }
}
