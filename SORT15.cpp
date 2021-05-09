#include<bits/stdc++.h>

using namespace std;


int main(){
    int a; cin>>a;
    while(a--){
        long long n, k; cin>>n>>k;
        long long arr[n];
        long long dem = 0;
        for(long long i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(long long i = 0; i < n; i++){
            // upper_bound() tra ve index cua phan tu dau tien tinh tu trai sang lon hon arr[i] + k - 1
            long long x = upper_bound(arr, arr + n, arr[i] + k - 1) - arr;
            dem += x - i - 1;
        }
        cout<<dem<<endl;
    }
}
