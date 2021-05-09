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
        long long n; cin>>n;
        for(long long i = 2; i <= sqrt(n); i++){
            if(ktraSoNT(i)){
                long long kq = pow(i,2);
                cout<<kq<<" ";
            }
        }
        cout<<endl;
;    }
    return 0;
}