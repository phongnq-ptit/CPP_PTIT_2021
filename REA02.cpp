#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr1[n];
        long long arr2[n];
        memset(arr2,0,sizeof(arr2)); // gan tat ca gia tri arr2 bang 0
        vector<long long> arr3;
        // nhap mang
        for(long long i = 0; i < n; i++){
            cin>>arr1[i];
        }
        // gan cac gia tri khac 0 tu arr1 vao vector<> arr3
        for(long long i = 0; i < n; i++){
            if(arr1[i] != 0) arr3.push_back(arr1[i]);
        }
        // gan cac gia tri tu vector sang arr2 
        for(long long i = 0; i < arr3.size(); i++){
            arr2[i] = arr3[i];           
        }
        //xuat mang arr2
        for(long long i = 0; i < n; i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}