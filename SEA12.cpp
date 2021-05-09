#include<bits/stdc++.h>

using namespace std;

bool timKiemNhiPhan(long long arr[], long long left, long long right, long long key){
    while(left <= right){
        long long middle = (right + left)/2;
        if(key == arr[middle]) return true;
        else if(key > arr[middle]) left = middle + 1;
        else right = middle - 1;
    }
    return false;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, x; cin>>n>>x;
        long long arr[n];
        long long arr_ktra[n]; memset(arr_ktra, 0, sizeof(arr_ktra));
        long long kq = -1;
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            arr_ktra[i] = abs(x - arr[i]);
        }
        sort(arr_ktra, arr_ktra + n);
        for(long long i = 0; i < n; i++){
            if(timKiemNhiPhan(arr_ktra, 0, n - 1, arr[i])){
                kq = 1;
                break;
            }
        }
        cout<<kq<<endl;
    }
    return 0;
}