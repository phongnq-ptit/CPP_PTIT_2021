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
        long long a,b; cin>>a>>b;
        long long kq = 0;
        long long max = (a < b) ? b : a;
        long long min = (a < b) ? a : b;
        isPrime(max);
        for(long long i = min; i <= max; i++){
            if(soNT[i]) kq++;
        }
        cout<<kq<<endl;
    }
}