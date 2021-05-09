#include<bits/stdc++.h>

using namespace std;
void ord04(long long arr[], int n){
    long long layPT[n]; layPT[0] = arr[0];
    long long kq = arr[0];
    long long koLayPT[n]; koLayPT[0] = 0;;
    for(int i = 1; i < n; i++){
        layPT[i] = koLayPT[i-1] + arr[i];
        koLayPT[i] = max(koLayPT[i-1], layPT[i-1]);
        kq = max(layPT[i], koLayPT[i]);
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ord04(arr, n);
    }
    return 0;
}