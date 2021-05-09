#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        vector<long long> arr1;
        // nhap mang va tu arr gan cac gia tri duong vao vector<> arr1 
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] > 0) arr1.push_back(arr[i]);
        }
        sort(arr1.begin(), arr1.end()); // sap xep vector arr1 theo thu tu tang dan
        set<long long> arr2(arr1.begin(),arr1.end()); // gan cac gia tri cua vector arr1 vao set<> arr2
        long long kq = 1;
        if(arr1.empty()) cout<<kq<<endl; // neu ham vector<> arr1 rong thi so nguyen duong nho nhat bang 1
        else{
            // neu ham vector<> arr1 khong phai mang rong thi thuc hien cong viec
            // tim xem gia tri kq co trong set<> arr2 khong, neu co thi tang len 1, neu khong co thi break while
            while(true){
                if(arr2.find(kq) == arr2.end()) break;
                else kq++;
            }
            cout<<kq<<endl;
        }
    }
    return 0;
}