#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        long long arr_kq[n]; memset(arr_kq,0,sizeof(arr_kq));
        vector<long long> arr_tg;
        // nhap mang
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            if(i >= 1){
                if(arr[i] == arr[i - 1] && arr[i] != 0){
                    arr[i - 1] *= 2;
                    arr[i] = 0;
                }
            }
        }
        for(long long i = 0; i < n; i++){
            if(arr[i] != 0) arr_tg.push_back(arr[i]);
        }
        for(long long i = 0; i < n; i++){
            if(i > arr_tg.size() - 1) cout<<arr_kq[i]<<" ";
            else cout<<arr_tg[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}