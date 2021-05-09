#include<bits/stdc++.h>

using namespace std;

void nhapMang(long long arr[], long long n){
    for(long long i = 0; i < n; i++){
        cin>>arr[i];
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, m; cin>>n>>m;
        long long arr1[n]; nhapMang(arr1, n);
        long long arr2[m]; nhapMang(arr2, m);
        sort(arr1, arr1 + n);
        long long x = arr1[0] - 1;
        for(long long i = 0 ; i < m; i++){
            for(long long j = 0; j < n; j++){
                if(arr2[i] == arr1[j]){
                    cout<<arr1[j]<<" ";
                    arr1[j] = x;
                }
                if(arr1[j] > arr2[i]) break;
            }
        }
        for(long long i = 0; i < n; i++){
            if(arr1[i] != x){
                cout<<arr1[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}