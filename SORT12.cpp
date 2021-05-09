#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

void nhapMang(long long arr[MAX], long long n){
    for(long long i = 0; i < n; i++){
        cin>>arr[i];
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n,m; cin>>n>>m;
        long long arr1[n]; nhapMang(arr1,n);
        long long arr2[m]; nhapMang(arr2,m);
        sort(arr1, arr1 + n); // sap xep mang arr1 theo thu tu tang dan
        sort(arr2, arr2 + m); // sap xep mang arr2 theo thu tu tang dan
        cout<<arr1[n - 1]*arr2[0]<<endl;
    }
    return 0;
}