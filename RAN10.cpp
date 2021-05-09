#include<bits/stdc++.h>

using namespace std;

void ran10(long long arr[], long long n){
    long long dem = 0, trai = 0, phai = n - 1;
    while(trai <= phai){
        if(arr[trai] == arr[phai]){
            trai++; phai--;
        } else if(arr[trai] < arr[phai]){
            trai++;
            arr[trai] += arr[trai - 1];
            dem++;
        } else{
            phai--;
            arr[phai] += arr[phai + 1];
            dem++;
        }
    }
    cout<<dem<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++) cin>>arr[i];
        ran10(arr, n);
    }
    return 0;
}