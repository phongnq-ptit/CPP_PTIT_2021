#include<bits/stdc++.h>

using namespace std;

long long danhDau[1000001]; 

struct duLieu{
    long long giaTri, soLanXuatHien;
};

bool ktra(duLieu a, duLieu b){
    if(a.soLanXuatHien > b.soLanXuatHien) return true;
    if(a.soLanXuatHien == b.soLanXuatHien && a.giaTri < b.giaTri) return true;
    return false;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        memset(danhDau, 0, sizeof(danhDau));
        duLieu arr[n];
        for(long long i = 0; i < n; i++){
            cin>>arr[i].giaTri;
            danhDau[arr[i].giaTri]++;
        }
        //gán thuộc tính soLanXuatHien của struct duLieu theo các giá trị khác 0 trong mảng danhDau
        for(long long i = 0; i < n; i++){
            arr[i].soLanXuatHien = danhDau[arr[i].giaTri];
        }
        sort(arr, arr + n, ktra); // sắp xếp mảng theo điều kiện của hàm ktra
        for(long long i = 0; i < n; i++){
            cout<<arr[i].giaTri<<" ";
        }
        cout<<endl;
    }
    return 0;
}