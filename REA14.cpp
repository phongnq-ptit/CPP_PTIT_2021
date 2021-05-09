#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        long long arr1[n][k];// n: la hang, k: la cot
        vector<long long > arr2;
        // nhap mang 2 chieu arr1 va gan cac gia tri arr1 vao vector arr2
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < k; j++){
                cin>>arr1[i][j];
                arr2.push_back(arr1[i][j]);
            }
        }
        sort(arr2.begin(),arr2.end());// sap xep mang arr2
        // xuat mang arr2
        for(long long i = 0; i < arr2.size(); i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}