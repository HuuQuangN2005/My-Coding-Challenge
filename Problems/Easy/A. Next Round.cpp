#include <iostream>
#include<string>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    int arr[101];
    cin>> n >>k;
    
    int sum =0;
    for (int i = 0; i< n ;i++){
        cin>>arr[i];
    }

    for (int i = 0; i< n ;i++){
        if(arr[i] >= arr[k-1] && arr[i]>0) sum++;
    }

    cout<<sum;
    return 0;
}