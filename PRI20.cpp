#include<bits/stdc++.h>

using namespace std;
bool soNT[1000001];
// sang nguyen to
void isPrime(long long n){
    memset(soNT,1,sizeof(soNT));
    soNT[0] = 0;
    soNT[1] = 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(soNT[i]){
            for(long long j = 2*i; j <= n; j += i){
                soNT[j] = 0;
            }
        }
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        isPrime(n);
        long long dem = 0;
        for(long long i = 1; i < n; i++){
            if(__gcd(i,n) == 1) dem++;
        }
        if(soNT[dem]) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}