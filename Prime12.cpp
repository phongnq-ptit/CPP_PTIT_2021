#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        long long kq = -1;
        vector<long long> arr;
        arr.clear();
        while(n%2==0){
            arr.push_back(2);
            n/=2;
        }
        for(long long i = 3; i <= sqrt(n); i+=2){
            while(n%i==0){
                arr.push_back(i);
                n/=i;
            }
        }
        if(n > 2) arr.push_back(n);
        if(k <= arr.size()) kq = arr[k - 1];
        cout<<kq<<endl;
    }
    return 0;
}
