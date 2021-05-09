#include<bits/stdc++.h>

using namespace std;
const long long P = 1e9 + 7;
// C(n, r) = C(n - 1, r) + C(n - 1, r - 1);
long long toHop[1001][1001];
void mod_09(){
    for(long long i = 0; i < 1001; i++){
        for(long long j = 0; j <= i; j++){
            if(i == j || j == 0) toHop[i][j] = 1;
            else toHop[i][j] = toHop[i - 1][j] + toHop[i - 1][j - 1];
            toHop[i][j] %= P;
        }
    }
}

int main(){
    int a; cin>>a;
    mod_09();
    while(a--){
        long long n,r; cin>>n>>r;
        cout<<toHop[n][r]<<endl;
    }
    return 0;
}