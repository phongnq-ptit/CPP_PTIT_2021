#include<bits/stdc++.h>

using namespace std;

// chuyen tu nhi phan sang he co so 4
// lay lan luot 2 ki tu lien tiep trong string roi doi sang he 10
// he co so 4 chi nhan cac gia tri 0 1 2 3
long long nhiPhanSangHe4(string a){
    long long kq;
    if(a == "00") kq = 0;
    else if(a == "01") kq = 1;
    else if(a == "10") kq = 2;
    else kq = 3;
    return kq;
}

// khi chuyen sang he co so 4 thi
// dau hieu nhan biet cho 5 giong nhu 11
void cacSoChiaHet5(string a){
    if(a.length()%2 != 0) a = '0' + a;
    long long tongChan = 0, tongLe = 0;
    bool doiHang = 1;
    // neu doiHang = 1 thi tinh tongChan
    // doiHang = 0 thi tinh tongLe
    for(long long i = 0; i < a.length(); i+=2){
        if(doiHang){
            tongChan += nhiPhanSangHe4(a.substr(i,2));
            doiHang = 0;
        } else{
            tongLe += nhiPhanSangHe4(a.substr(i,2));
            doiHang = 1;
        }
    }
    long long check = abs(tongChan - tongLe);
    if(check%5==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        cacSoChiaHet5(n);
    }
    return 0;
}