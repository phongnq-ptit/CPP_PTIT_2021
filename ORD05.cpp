#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        vector<long long> kq;
        for(long long i = 0; i < n; i++) cin>>arr[i];
        for(long long i = 0; i < n -1; i++){
            for(long long j = i + 1; j < n; j++){
                if(arr[i] < arr[j]) kq.push_back(arr[j] - arr[i]);
            }
        }
        sort(kq.begin(), kq.end());
        if(kq.empty()) cout<<-1<<endl;
        else cout<<kq[kq.size() - 1]<<endl;
    }
}