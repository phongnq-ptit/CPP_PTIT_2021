#include<bits/stdc++.h>

using namespace std;

void mangMoutain(long long arr[], long long n, long long l, long long r){
    long long max = arr[0], index_max = 0;
    long long check = 0;
    if(r - l + 1 < 3) cout<<"Yes"<<endl;
    else{
        // tim vi tri cua max trong khoang l --> r
        for(long long i = l; i <= r; i++){
            if(max < arr[i]){
                max = arr[i];
                index_max = i;
            }
        }
        // ktra tu l --> index_max day phai la khong giam
        for(long long i = l; i < index_max; i++){
            if(arr[i] > arr[i + 1]){
                check = 1;
                break;
            } 
        }
        // ktra tu index_max --> r day phai la khong tang
        for(long long i = index_max; i < r; i++){
            if(arr[i] < arr[i + 1]){
                //cout<<i<<endl;
                check = 1;
                break;
            } 
        }
        if(check == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long l, r; cin>>l>>r; 
        mangMoutain(arr, n, l, r);
    }
    return 0;
}