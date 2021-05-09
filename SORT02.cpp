#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n, x; cin>>n>>x;
        long long arr[n];
        multimap<long long , long long> mp;
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            mp.insert(make_pair(abs(x - arr[i]), arr[i]));
        }
        for(auto i : mp){
            cout<<i.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}