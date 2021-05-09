#include<bits/stdc++.h>

using namespace std;

/*
    2! = 2!
    3! = 3!
    4! = 3!*2!*2!
    5! = 5!
    6! = 5!*3!
    7! = 7!
    8! = 7!*2!*2!*2!
    9! = 7!*3!*3!*2!
*/

void capGiaiThua(long long arr[], long long n){
    long long kq[8]; memset(kq, 0, sizeof(kq));
    for(int i = 0; i < n; i++){
        if(arr[i] == 2) { kq[2] += 1; }
        if(arr[i] == 3) { kq[3] += 1; }
        if(arr[i] == 4) { kq[3] += 1; kq[2] += 2; }
        if(arr[i] == 5) { kq[5] += 1; }
        if(arr[i] == 6) { kq[5] += 1; kq[3] += 1; }
        if(arr[i] == 7) { kq[7] += 1; }
        if(arr[i] == 8) { kq[7] += 1; kq[2] += 3; }
        if(arr[i] == 9) { kq[7] += 1; kq[3] += 2; kq[2] += 1; }
    }
    for(int i = 7; i >= 2; i--){
        if(kq[i] != 0){
            for(int j = 1; j <= kq[i]; j++){
                cout<<i;
            }
        }
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n, a; cin>>n>>a;
        long long arr[n]; memset(arr, 0, sizeof(arr));
        for(long long i = n - 1; i >= 0; i--){
            int j = a%10;
            arr[i] = j;
            a/=10;
        }
        capGiaiThua(arr, n);
    }
    return 0;
}
