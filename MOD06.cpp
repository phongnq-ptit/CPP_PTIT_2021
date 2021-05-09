#include<bits/stdc++.h>

using namespace std;
long long m;

long long x_mu_y(long long x, long long y){
    if(y == 1) return x;
    long long kq = x_mu_y(x, y/2);
    if(y%2 == 0) return kq*kq%m;
    else return x*(kq*kq%m)%m;
}

void mod06(string a, long long b, long long m){
    long long kq = 0;
    for(long long i = 0; i < a.length(); i++){
        kq = kq*10 + (a[i] - '0');
        kq %= m;
    }

    long long kq_real = x_mu_y(kq, b);
    cout<<kq_real%m<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string a; long long b;
        cin>>a>>b>>m;
        mod06(a, b, m);
    }
    return 0;
}