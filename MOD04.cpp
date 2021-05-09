#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        long long sum = 0;
        if(n < k){
            for(int i = 0; i <= n; i++){
                sum+=i;
            }
        } else{
            for(int i = 1; i <= n; i++){
                if(i%k==0) continue;
                sum += i%k;
            }
        }
        int kq = (sum == k)? 1 : 0;
        cout<<kq<<endl;
    }
    return 0;
}