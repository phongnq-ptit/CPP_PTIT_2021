#include<bits/stdc++.h>

using namespace std;

string soLon;
string soBe;
int ktra = 0;
// chuyen tu char ve dang number
int chuyenDoi(char a){
    int kq;
    switch (a)
    {
    case '1': kq = 1; break;
    case '2': kq = 2; break;
    case '3': kq = 3; break;
    case '4': kq = 4; break;
    case '5': kq = 5; break;
    case '6': kq = 6; break;
    case '7': kq = 7; break;
    case '8': kq = 8; break;
    case '9': kq = 9; break;
    case '0': kq = 0; break;
    }
    return kq;
}
// do dai  string soBe == do dai string soLon
void boSungSoBe(){
    while(soBe.length() < soLon.length()){
        soBe = "0" + soBe;
    }
}
// ktra xe string nao co gia tri nao lon hon
void update(string a, string b){
    ktra = 0;
    int check = 0;
    if(a.length() > b.length()){
        soLon = a;
        soBe = b;
        check = 1;
    } else if(a.length() < b.length()){
        soBe = a;
        soLon = b;
        check = 1;
    } else{
        int n = a.length();
        for(int i = 0; i < n ; i++){
            int soCheckA = chuyenDoi(a[i]);
            int soCheckB = chuyenDoi(b[i]);
            if(soCheckA > soCheckB){
                soBe = b;
                soLon = a;
                check = 1;
                break;
            } else if(soCheckA < soCheckB){
                soBe = a;
                soLon = b;
                check = 1;
                break;
            }
        }
    }
    if(check == 0){
        soLon = a;
        soBe = b;
        ktra = 1;
    } else{
        boSungSoBe();
    }
}
// tinh tong cua a, b
void tinhTong(string a, string b){
    update(a,b); // tim ra soLon, soBe
    int tong[soLon.length() + 1]; memset(tong,-1,sizeof(tong));
    int nho = 0;
    for(int i = soLon.length() - 1; i >= 0; i--){
        int soHang1 = chuyenDoi(soLon[i]);
        int soHang2 = chuyenDoi(soBe[i]);
        int tongSoHang = soHang1 + soHang2 + nho;
        if(tongSoHang >= 10){
            if(i==0){
                tong[i + 1] = tongSoHang%10; 
                tong[0] = 1;
            } else{
                tong[i + 1] = tongSoHang%10;
                nho = 1;
            }
        } else{
            tong[i + 1] = tongSoHang;
            nho = 0;
        }
    }
    for(int i = 0; i < soLon.length() + 1; i++){
        if(tong[i] != -1){
            cout<<tong[i];
        }
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while (a--){
        string n,m; cin>>n>>m;
        tinhTong(n,m);
    }
    return 0;
}