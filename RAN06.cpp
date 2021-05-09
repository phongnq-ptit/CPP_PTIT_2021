#include<bits/stdc++.h>

using namespace std;

void ran06(int arr[], int n){
    int a[n];
    a[0] = arr[0];
    int res = arr[0];
    for(int i = 0; i < n; i++){
        a[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]) a[i] = max(a[i], arr[i] + a[j]);
        }
        res = max(res, a[i]);
    }
    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ran06(arr, n);
    }
    return 0;
}