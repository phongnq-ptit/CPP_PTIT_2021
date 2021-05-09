#include<bits/stdc++.h>

using namespace std;

long long mod11(long long a, long long b, long long c){
    if(b == 0) return 0;
    long long kq = mod11(a, b/2, c);
    if(b%2 == 0) return (2*kq%c)%c;
    else return (a%c + (2*kq%c))%c;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long a, b, c; cin>>a>>b>>c;
        cout<<mod11(a, b, c)<<endl;
    }
    return 0;
}