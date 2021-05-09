#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        long long arr[n];
        long long dem = 0;
        vector<long long> arr1;
        // nhap mang arr
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);// sap xep mang arr
        for(long long i = n - 1; i >= 0 ; i--){
            if(dem == k) break;
            cout<<arr[i]<<" ";
            dem++;
        }
        cout<<endl;
    }
    return 0;
}