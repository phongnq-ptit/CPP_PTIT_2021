#include<bits/stdc++.h>

using namespace std;

void lcm_gcd_6(long long n, long long m){
    long long tong = ((n + 1) * n) / 2;
    long long x = (tong + m)/2;
    long long y = tong - x;
    if(tong < m){
        cout<<"No"<<endl;
        return;
    }
    if(x + y == tong && x - y == m) {
        if(__gcd(x, y) == 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl; 
        return;
    }
    cout<<"No"<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, m; cin>>n>>m;
        lcm_gcd_6(n, m);
    }
    return 0;
}