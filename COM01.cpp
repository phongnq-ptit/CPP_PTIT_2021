#include<bits/stdc++.h>

using namespace std;

int mangNhiPhan[21]; 
bool check = true;

void xuatCauHinh(int n){
    for(int i = 1; i <= n; i++){
        cout<<mangNhiPhan[i];
    }
}

void sinhNhiPhan(int n){
    int i = n;
    while(i > 0 && mangNhiPhan[i] != 0){
        mangNhiPhan[i] = 0;
        i--;
    }
    if(i > 0) mangNhiPhan[i] = 1;
    else check = false;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n; cin>>n;
        // xet cau hinh dau tien
        for(int i = 1; i <= n; i++) mangNhiPhan[i] = 0;
        while(check){
            // in ra cac cau hinh
            xuatCauHinh(n);
            // sinh ra cau hinh tiep theo
            sinhNhiPhan(n);
            cout<<" ";
        }
        cout<<endl;
        check = true;
    }
    return 0;
}