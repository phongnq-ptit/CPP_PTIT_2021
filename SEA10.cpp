#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2==0) return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int check = 0;
        int bienTG;
        for(int i = 2; i <= n/2 ; i++){
            if(isPrime(i) && isPrime(n - i)){
                bienTG = i;
                check = 1;
                break;
            }
        }
        if(check == 1) cout<<bienTG<<" "<<n - bienTG<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}