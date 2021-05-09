#include<bits/stdc++.h>

using namespace std;
// sang nguyen to
bool snt[100001];
void isPrime(long long n){
    memset(snt, 1, sizeof(snt));
    snt[0] = 0;
    snt[1] = 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(snt[i]){
            for(long long j = 2*i; j <= n; j += i){
                snt[j] = 0;
            }
        }
    }
}

long long tongChuSo(long long n){
    long long sum = 0;
    while(n != 0 ){
        int i = n%10;
        sum += i;
        n/=10;
    }
    return sum;
}

long long tongUocSNT(long long n){
    long long sum = 0;
    while(n%2==0){
        sum += tongChuSo(2);
        n/=2;
    }
    for(long long i = 3; i <= sqrt(n); i += 2){
        while(n%i==0){
            sum += tongChuSo(i);
            n/=i;
        }
    }
    if(n > 2) sum += tongChuSo(n);
    return sum;
}

int main(){
    int a; cin>>a;
    isPrime(100001);
    while(a--){
        long long n; cin>>n;
        if( !snt[n] && tongChuSo(n) == tongUocSNT(n) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}