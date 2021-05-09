#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long x_mu_y(long long x, long long y){
    if(y == 0) return 1;
    long long kq = x_mu_y(x, y/2);
    if(y%2 == 0) return kq*kq%mod;
    else return x*(kq*kq%mod)%mod;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, x; cin>>n>>x;
        long long P[n];
        for(long long i = 0; i < n; i++) cin>>P[i];
        long long kq = 0;
        int mu = 0;
        for(long long i = n - 1; i >= 0; i--){
            kq += P[i]*x_mu_y(x,mu);
            kq %= mod;
            mu++;
        }
        cout<<kq<<endl;
    }
    return 0;
}