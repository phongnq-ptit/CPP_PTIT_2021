#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        long long kq[n]; memset(kq, 0, sizeof(kq));
        for(long long i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        long long j = 0;
        for(long long i = 0; i < n; i+=2){
            kq[i] = arr[j];
            j++;
        }
        for(long long i = 1; i < n; i+=2){
            kq[i] = arr[j];
            j++;
        }
        for(long long i = 0; i < n; i++) cout<<kq[i]<<" ";
        cout<<endl;
    }
    return 0;
}