#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n, k; cin>>n>>k;
        long long arr[n];
        // nhap mang
        for(long long  i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long kq_dem = 0;
        for(long long i = 0; i < n; i++){
            for(long long j = i + 1; j < n; j ++){
                if(i != j && (arr[i] + arr[j])==k) kq_dem++;
            }
        }
        cout<<kq_dem<<endl;
    }
    return 0;
}