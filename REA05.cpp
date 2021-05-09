#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        long long arr1[n];
        long long arr_kq[2*n]; memset(arr_kq,0,sizeof(arr_kq));
        // nhap mang
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n); // sap xep mang arr theo thu tu tang dan
        // mang arr1 theo thu tu giam dan cua arr
        long long j = 0;
        for(long long i = n - 1; i >= 0; i--){
            arr1[j] = arr[i];
            j++;
        }
        // gan cac ptu arr vao cac vi tri le cua arr_kq
        long long j1 = 1;
        for(long long i = 0; i < n; i++){
            arr_kq[j1] = arr[i];
            j1 += 2;
        }
        // gan cac ptu arr1 vao cac vi tri chan cua arr_kq
        long long j2 = 0;
        for(long long i = 0; i < n; i++){
            arr_kq[j2] = arr1[i];
            j2 += 2;
        }
        for(long long i = 0; i < n; i++){
            cout<<arr_kq[i]<<" ";
        }
        cout<<endl;
    }
}