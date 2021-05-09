#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr1[n];
        long long arr2[n];
        memset(arr2,-1,sizeof(arr2));// gan tat ca gia tri trong mang arr2 bang -1
        set<long long> arr3;
        // nhap mang
        for (long long i = 0; i < n; i++){
            cin>>arr1[i];
        } 
        // gan cac gia tri arr1 vao set<> arr3
        for (long long i = 0; i < n; i++){
            arr3.insert(arr1[i]);
        }
        // ktra xem co gia tri i trong set khong, neu co gan arr2[i] = i, neu khong thi bo qua
        for(long long i = 0; i < n; i++){
            if(arr3.find(i) != arr3.end()) arr2[i] = i;
            else continue;
        }
        // xuat mang
        for (long long i = 0; i < n; i++){
            cout<<arr2[i]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}