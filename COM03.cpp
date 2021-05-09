#include<bits/stdc++.h>

using namespace std;

long long arr[1000001];
bool Ok = true;

void sinhHoanVi(long long n){
    long long i = n - 1;
    // tim vi tri i co arr[i] < arr[i + 1]
    while(i > 0 && arr[i] > arr[i + 1]) i--;
    if(i > 0){
        long long j = n;
        while(arr[i] > arr[j]) j--; // tim arr[j] > arr[i]
        swap(arr[i],arr[j]); // doi cho cho arr[i] va arr[j]
        // lat nguoc lai doan tu i + 1 den n
        long long a = i + 1;
        long long b = n;
        while(a <= b){
            swap(arr[a],arr[b]);
            a++; b--;
        }
    } else Ok = false;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        // xac dinh cau hinh dau tien
        for(long long i = 1; i <= n; i++){
            arr[i] = i;
        }
        while (Ok){
            // in ra cac cau hinh
            for(long long i = 1; i <= n; i++){
                cout<<arr[i];
            }
            sinhHoanVi(n);
            cout<<" ";
        }
        Ok = true;
        cout<<endl;
    }
}