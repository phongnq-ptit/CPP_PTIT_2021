#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
    long long ucln = __gcd(a,b);
    return (a*b)/ucln;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long kq = 1;
        for(long long i = 2; i <= n; i++){
            kq = bcnn(kq,i); 
        }
        cout<<kq<<endl;
    }
}

