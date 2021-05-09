#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
    while(a != b){
        if(a > b) a-=b;
        else b-=a;
    }
    return a;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, x, y; cin>>n>>x>>y;
        for(long long i = 0; i < ucln(x,y); i++){
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}