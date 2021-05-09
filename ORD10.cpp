#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        long long l[n];
        for(long long i = 0; i < n; i++) cin>>arr[i];
        // quy hoach dong
        for(long long i = 0; i < n; i++){
            long long lmax = 0;
            for(long long j = 0; j < i; j++){
                if(arr[i] > arr[j]){
                    if(l[j] > lmax) lmax = l[j];
                }
            }
            l[i] = lmax + 1;
        }
        long long max = l[0];
        for(long long i = 0; i < n; i++){
            if(l[i] > max) max = l[i];
        }
        cout<<max<<endl;
    }
    return 0;
}