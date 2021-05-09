#include<bits/stdc++.h>

using namespace std;

void ran04(long long arr[], long long n){
    long long sum = 0, kq = arr[0];
    for(long long i = 0; i < n; i++){
        if(sum + arr[i] < 0) sum = 0;
        else{
            sum += arr[i];
            if(kq < sum) kq = sum;
        }
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++) cin>>arr[i];
        ran04(arr, n);
    }
    return 0;
}