#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long a,b,c,d; cin>>a>>b>>c>>d;
        long long dem = 0;
        long long max = (a < b)? b : a;
        long long min = (a < b)? a : b;
        for(long long i = min; i <= max; i++){
            if(i%c==0 || i%d==0) dem++;
        }
        cout<<dem<<endl;
    }
    return 0;
}