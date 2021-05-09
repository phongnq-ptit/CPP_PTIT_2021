#include<bits/stdc++.h>

using namespace std;
int danhDau[1000000];
int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        memset(danhDau,0,sizeof(danhDau));
        while(n%2==0){
            danhDau[2]++;
            n/=2;
        }
        for(long long i = 3; i <= sqrt(n); i+=2){
            while(n%i==0){
                danhDau[i]++;
                n/=i;
            }
        }
        if(n > 2) danhDau[n]++;
        for(long long i = 2; i < 1000000 ; i++){
            if(danhDau[i] >= 1) cout<<i<<" "<<danhDau[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}