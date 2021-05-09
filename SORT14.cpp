// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int a; cin>>a;
//     while(a--){
//         long long n; cin>>n;
//         long long arr[n];
//         set<long long> arr1;
//         // nhap mang
//         for(long long i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         sort(arr, arr + n); // sap xep mang theo thu tu tang dan
//         long long dem = 0;
//         for(long long i = 0; i < n - 1; i++){
//             if(arr[i] != arr[i + 1]){
//                 dem += ((arr[i + 1] - arr[i]) - 1);
//             }
//         }
//         cout<<dem<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        set<long long> arr;
        long long max = -1000000000, min = 1000000000;
        for(long long i = 0; i < n; i++){
            long long val; cin>>val;
            arr.insert(val);
            if(val > max) max = val;
            if(val < min) min = val;
        }
        long long value = max - min + 1;
        long long kq = value - arr.size();
        cout<<kq<<endl;
    }
    return 0;
}