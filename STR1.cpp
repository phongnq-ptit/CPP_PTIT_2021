#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        int k; cin>>k;
        set<char> check(n.begin(), n.end());
        int soPhepBienDoi = 26 - check.size();
        if(k >= soPhepBienDoi) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}