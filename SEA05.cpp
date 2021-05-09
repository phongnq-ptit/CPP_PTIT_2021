#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr1[n];
        set<long long> arr2;
        //nhap mang arr1 va them cac phan tu cua mang arr1 vao set<> arr2
        for(long long i = 0; i < n; i++){
            cin>>arr1[i];
            arr2.insert(arr1[i]);
        }
        sort(arr1, arr1 + n);// sap xep cac ptu cua mang arr1 theo thu tu tang dan
        if(arr2.size() > 1){
            long long min = arr1[0];
            //vong lap for nay de tim ptu nho thu 2
            for(long long i = 1; i < n; i++){
                if(arr1[i] > min){
                    cout<<min<<" "<<arr1[i]<<endl;
                    break;
                }
            }
        } else cout<<"-1"<<endl;
    }
    return 0;
}