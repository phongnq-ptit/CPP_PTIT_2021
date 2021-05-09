#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        vector<long long> arr_kq;
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(long long i = 0; i < n; i++){
            if(i == 0) arr_kq.push_back(arr[i]*arr[i + 1]);
            else if(i == n - 1) arr_kq.push_back(arr[n - 1]*arr[n - 2]);
            else arr_kq.push_back(arr[i - 1]*arr[i + 1]);
        }
        for(long long i = 0; i < n; i++){
            cout<<arr_kq[i]<<" ";
        }
        cout<<endl;
    }
}