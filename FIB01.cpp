#include<bits/stdc++.h>
 
using namespace std;
 
#define mod 1000000007
 
int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long kq;
        long long so1 = 0; // fibo(0)
        long long so2 = 1; // fibo(1)
        if(n == 0) cout<<0%mod<<endl;
        else if(n == 1) cout<<1%mod<<endl;
        else{
            for(long long i = 2; i <= n ; i++){
                kq = (so1%mod + so2%mod)%mod;
                so1 = so2;
                so2 = kq;
            }
        cout<<kq<<endl;
        }
    }
    return 0;
}
