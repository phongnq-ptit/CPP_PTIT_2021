#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        // nhap mang
        for (long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n); // sap xep mang theo thu tu tang dan
        // xuat mang
        for(long long i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}