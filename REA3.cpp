#include<bits/stdc++.h>

using namespace std;

void rea3(long long arr[], long long n, long long k, long long len_subarr){
    long long left = 0, right = len_subarr;
    long long min = 1e9;
    // duyệt các dãy con liên tiếp có len_subarr phần tử
    // đếm xem trong dãy con đó có bao nhiêu phần tử > k
    // lấy giá trị min của biến 'dem' 
    while(right <= n){
        long long dem = 0;
        for(long long i = left; i < right; i++){
            if(arr[i] > k) dem++;
        }
        if(min > dem) min = dem;
        left++; right++;
    }
    cout<<min<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, k; cin>>n>>k;
        long long arr[n];
        long long length_subarr = 0;
        // tìm xem có bao nhiêu số <= k 
        // số các số <= k là độ dài dãy con để xét
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] <= k) length_subarr++;
        }
        rea3(arr, n, k, length_subarr);
    }
    return 0;
}