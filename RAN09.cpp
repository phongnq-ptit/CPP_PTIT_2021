#include<bits/stdc++.h>

using namespace std;

/*
Cách chuyển một mảng về dạng 000
while( điều kiện về dạng 000.. ){
    trừ các phần tử số lẻ cho 1
    chia tất cả các phần tử mảng cho 2
}
*/

void ran09(int arr[], int n){
    int dem = 0;
    sort(arr, arr + n);
    while(true){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                arr[i]--;
                dem++;
            }
        }
        int temp = upper_bound(arr, arr + n, 0) - arr;
        if(temp == n) break;
        for(int i = 0; i < n; i++){
            arr[i] /= 2;
        }
        dem++; 
    }
    cout<<dem<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ran09(arr, n);
    }
    return 0;
}