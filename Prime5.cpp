#include<bits/stdc++.h>

using namespace std;

bool ktraSoNT(long long n){
    if(n < 2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(long long i = 3; i <= sqrt(n); i += 2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long a,b; cin>>a>>b;
        long long max = (a < b)? b : a;
        long long min = (a < b)? a : b;
        for(long long i = min; i <= max; i++){
            if(ktraSoNT(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}