#include<bits/stdc++.h>

using namespace std;

void mod05(string a, long long b){
    long long kq = 0;
    for(long long i = 0; i < a.length(); i++){
        kq = kq*10 + (a[i] - '0');
        kq %= b;
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; 
        long long m; cin>>n>>m;
        mod05(n, m);
    }
    return 0;
}