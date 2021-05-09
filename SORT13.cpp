#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,m; cin>>n>>m;
        long long arr1[n];
        long long arr2[m];
        vector<long long> arr_kq;
        // nhap mang arr1 va them cac gia tri cua arr1 vao vector arr_kq
        for(long long i = 0; i < n; i++){
            cin>>arr1[i];
            arr_kq.push_back(arr1[i]);
        }
        // nhap mang arr2 va them cac gia tri cua arr2 vao vector arr_kq
        for(long long i = 0; i < m; i++){
            cin>>arr2[i];
            arr_kq.push_back(arr2[i]);
        }
        sort(arr_kq.begin(), arr_kq.end()); // sap xep cac gia tri vector<> theo thu tu tang dan
        // xuat mang vector<> arr_kq sau khi sap xep
        for(long long i = 0; i < arr_kq.size(); i++){
            cout<<arr_kq[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}