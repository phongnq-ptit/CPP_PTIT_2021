#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        vector<long long> arr;
        long long kq = -1;
        // nhap mang
        for(long long i = 0; i < n; i++){
            long long value; cin>>value;
            arr.push_back(value);
        }
        // gan cac gia tri trong vector vao set<> arr2
        set<long long> arr2(arr.begin(), arr.end());
        // tim xem k co trong set khong, neu co thi gan kq = i + 1
        for(long long i = 0; i < n; i++){
            if(arr2.find(k) != arr2.end()){
                if(arr[i] == k){
                    kq = 1;
                    break;
                }
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}