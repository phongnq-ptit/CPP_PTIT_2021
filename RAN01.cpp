#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,soCauHoi; cin>>n>>soCauHoi;
        long long arr[n];
        // nhap mang
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        while(soCauHoi--){
            long long l,r; cin>>l>>r;
            long long max = (l < r) ? r : l;
            long long min = (l < r) ? l : r;
            long long sum = 0;
            for(long long i = min - 1; i < max; i++){
                sum += arr[i];
            }
            cout<<sum<<endl;
        }
        cout<<endl;
    }
    return 0;
}