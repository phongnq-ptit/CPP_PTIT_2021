#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        long long arr[n];
        long long kq;
        long dem = 0;
        // nhap mang 
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            if(dem == 1) continue;
            if(k == arr[i]){
                kq = i + 1;
                dem++;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}