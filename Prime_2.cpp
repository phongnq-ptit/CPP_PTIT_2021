#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        vector<long long> arr;
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
        sort(arr.begin(),arr.end());
        cout<<arr[arr.size() - 1]<<endl;
    }
    return 0;
}