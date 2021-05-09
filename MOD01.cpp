#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long x,y,p; cin>>x>>y>>p;
        long long kq = 1;
        for(long long int i = 1; i <= y; i++){
            kq = (kq*x)%p;
        }
        cout<<kq<<endl;
    }
    return 0;
}

