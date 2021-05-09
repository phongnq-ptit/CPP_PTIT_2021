#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a,m; cin>>a>>m;
        long long kq = -1;
        for(long long i = 0; i < m; i++){
            if((i*a)%m == 1){
                kq = i;
                break;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}