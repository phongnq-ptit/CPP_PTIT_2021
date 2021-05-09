#include<bits/stdc++.h>

using namespace std;

bool ktraSoNT(long long n){
    if(n < 2) return false;
    if(n ==2) return true;
    if(n%2==0) return false;
    for(long long i = 3; i <= sqrt(n); i += 2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long L, R; cin>>L>>R;
        long long kq = 0;
        long long max = (L < R) ? R : L;
        long long min = (L < R) ? L : R;
        for(long long i = min; i <= max; i++){
            if(ktraSoNT(i)){
                if(pow(i,2) <= max) kq++;
                else break;
            }
        }
        cout<<kq<<endl;
;    }
    return 0;
}