#include<bits/stdc++.h>

using namespace std;

bool kTraSoNT(long long n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2==0) return false;
    for(long long i = 3; i <= sqrt(n); i += 2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    long long a,b; cin>>a>>b;
    long long min = (a < b) ? a : b;
    long long max = (a < b) ? b : a;
    for(long long i = min; i <= max ; i++){
        if(kTraSoNT(i)) cout<<i<<" ";
    }
    cout<<endl;
}