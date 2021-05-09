#include<bits/stdc++.h>

using namespace std;

long long demSoChuSo(long long a){
    long long kq = 0;
    while(a != 0){
        kq++;
        a/=10;
    }
    return kq;
}

long long bcnn(long long a, long long b){
    long long ucln = __gcd(a,b);
    return (a*b)/ucln;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long x, y, z, n; cin>>x>>y>>z>>n;
        long long i = pow(10,n - 1);
        long long a;
        long long bcnn1 = bcnn(x,y);  bcnn1 = bcnn(bcnn1,z);
        if(demSoChuSo(bcnn1) == n) cout<<bcnn1;
        else if(demSoChuSo(bcnn1) > n) cout<<-1;
        else {
            if(i%bcnn1 == 0) a = i/bcnn1;
            else a = i/bcnn1 + 1;
            cout<<bcnn1*a;
        }
        cout<<endl;
    }
    return 0;
}
