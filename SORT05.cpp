#include<bits/stdc++.h>

using namespace std;
set<long long> mangHop;
set<long long> mangGiao;
void nhapMang(long long arr[], long long n){
    for(long long i = 0 ; i < n; i++){
        cin>>arr[i];
        mangHop.insert(arr[i]);
    }
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, m; cin>>n>>m;
        long long arrA[n], arrB[m];
        nhapMang(arrA, n);
        nhapMang(arrB, m);
        //in mang hop
        for(set<long long>::iterator i = mangHop.begin(); i != mangHop.end(); i++){
            cout<<*i<<" ";
        }
        mangHop.clear();
        cout<<endl;
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < m; j++){
                if(arrA[i] == arrB[j]) mangGiao.insert(arrA[i]);
            }
        }
        // in mang giao
        for(set<long long>::iterator i = mangGiao.begin(); i != mangGiao.end(); i++){
            cout<<*i<<" ";
        }
        mangGiao.clear();
        cout<<endl;
    }
    return 0;
}