#include<bits/stdc++.h>

using namespace std;
long long f[1002];
void fibo(int n){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    int a; cin>>a;
    fibo(1001);
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 1001; j++){
                if(arr[i] == f[j]){
                    cout<<arr[i]<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}