#include<bits/stdc++.h>

using namespace std;

struct duLieu{
    long long chiSo, giaTri;
};

bool cmp(duLieu a, duLieu b){
    if(a.giaTri < b.giaTri) return true;
    if(a.giaTri == b.giaTri && a.chiSo < b.chiSo) return true;
    return false;
}

long long minSwap(long long arr[], long long n){
    long long kq = 0;
    duLieu ktra[n];
    for(long long i = 0; i < n; i++){
        ktra[i].giaTri = arr[i]; 
        ktra[i].chiSo = i; 
    }
    sort(ktra, ktra + n, cmp); // sắp xếp tăng dần theo cmp
    vector<bool> danhDau(n,0);
    for(long long i = 0; i < n; i++){
        if(danhDau[i] || ktra[i].chiSo == i) continue;
        // tìm xem có bao nhiêu nút cần sắp xếp
        long long j = i;
        long long soNut = 0;
        while(!danhDau[j]){
            danhDau[j] = 1;
            j = ktra[j].chiSo;
            soNut++;
        }
        // số lần đổi chỗ ít nhất là(số nút - 1)
        if(soNut > 0) kq += (soNut - 1);
    }
    return kq;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        for(long long i = 0; i < n; i++) cin>>arr[i];
        cout<<minSwap(arr, n)<<endl;
    }
}