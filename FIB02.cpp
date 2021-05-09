#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        unsigned long long n; cin>>n;
        bool check = false;
        long long so1 = 0;// so fibo(0)
        long long so2 = 1;// so fibo(1)
        long long fibo_n;
        if(n == 0 || n == 1) check = true;
        else{
            for(long long i = 2; i <= 1300; i++){
                fibo_n = so1 + so2;
                so1 = so2;
                so2 = fibo_n;
                if(n == fibo_n){
                    check = true;
                    break;
                }
            }
        }
        cout<<fibo_n<<endl;
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
