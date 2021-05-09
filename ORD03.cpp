#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        vector<long long> arr_kq;
        long long arr[n][n];
        // nhap mang
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                cin>>arr[i][j];
                arr_kq.push_back(arr[i][j]);
            }
        }
        sort(arr_kq.begin(), arr_kq.end());// sap xep vector arr_kq
        cout<<arr_kq[k - 1]<<endl;
    }
}