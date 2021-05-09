#include<bits/stdc++.h>

using namespace std;

long long arr[1000001];
bool Ok = true;

void sinhToHop(long long n, long long k){
    long long i = k;
    while(i > 0 && arr[i] == n - k + i) i--;
    if(i > 0){
        arr[i]++;
        for(long long j = i + 1; j <= k; j++){
            arr[j] = arr[i] + j - i;
        }
    } else Ok = false;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n,k; cin>>n>>k;
        // xac dinh cau hinh dau tien
        for(long long i = 1; i <= k; i++){
            arr[i] = i;
        }
        while(Ok){
            // in ra cac cau hinh
            for(long long i = 1; i <= k; i++){
                cout<<arr[i];
            }
            sinhToHop(n,k);
            cout<<" ";
        }
        Ok = true;
        cout<<endl;
    }
}