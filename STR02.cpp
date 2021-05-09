#include<bits/stdc++.h>

using namespace std;

int chuyenDoiSo(char a){
    int kq;
    switch(a){
        case '0': kq = 0; break;
        case '1': kq = 1; break;
        case '2': kq = 2; break;
        case '3': kq = 3; break;
        case '4': kq = 4; break;
        case '5': kq = 5; break;
        case '6': kq = 6; break;
        case '7': kq = 7; break;
        case '8': kq = 8; break;
        case '9': kq = 9; break;
    }
    return kq;
}

int hieuHangChanLe(string a){
    int tongHangChan = 0;
    int tongHangLe = 0; 
    for(long long i = 0; i < a.length(); i++){
        if(i%2==0) tongHangChan += chuyenDoiSo(a[i]);
        else tongHangLe += chuyenDoiSo(a[i]);
    }
    int hieu = abs(tongHangChan - tongHangLe);
    return hieu;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        int soMoi = hieuHangChanLe(n);
        if(soMoi%11==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}