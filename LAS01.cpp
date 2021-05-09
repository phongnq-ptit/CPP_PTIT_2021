#include<bits/stdc++.h>

using namespace std;

long long Rut_Gon(long long n){
    long long sum = 0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        while(true){
            if(n > 9) n = Rut_Gon(n);
            else break;
        }
        cout<<n<<endl;
    }
    return 0;
}