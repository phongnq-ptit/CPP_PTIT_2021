#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;        
        vector<long long> arr;
        // nhap mang
        for(long long i = 0; i < n; i++){
            long long value; cin>>value;
            arr.push_back(value);
        }
        sort(arr.begin(), arr.end()); // sap xep mang arr
        cout<<arr[arr.size() - 1]<<endl;
    }
    return 0;
}