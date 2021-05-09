#include<bits/stdc++.h>
 
using namespace std;

const long long mod = 1e9 + 7;

long long ucln(long long arr[], long long n){
    long long kq = arr[0]%mod;
    for(long long i = 1; i< n; i++){
        kq = __gcd(kq,arr[i])%mod;
    }
    return kq%mod;
}

long long tich(long long arr[], long long n){
    long long kq = 1;
    for(long long i = 0; i < n; i++){
        kq = kq*arr[i]%mod;
    }
    return kq%mod;
}

long long power(long long a, long long b){
    if(b==0)return 1;
    long long x = power(a, b/2);
    if(b%2 == 0) return x*x%mod;
    return a*(x*x%mod)%mod;
}

void lcm_gcd_3(long long arr[], long long n){
    long long hx = tich(arr, n);
    long long gx = ucln(arr, n);
    cout<<power(hx,gx)%mod<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++) cin>>arr[i];
        lcm_gcd_3(arr, n);
    }
}