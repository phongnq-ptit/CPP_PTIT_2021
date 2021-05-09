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
// tinh hieu cua abs(a - b)
void tinhHieu(string a, string b){
    update(a,b); // tim ra soLon, soBe
    // neu hai so bang nhau thi in ra 0
    if(ktra == 1){
        cout<<0<<endl;
        return;
    }
    int hieu[soLon.length()]; memset(hieu,-1,sizeof(hieu));
    int nho = 0;
    for(int i = soLon.length() - 1; i >= 0; i--){
        int soBiTru = chuyenDoi(soLon[i]);
        int soTru = chuyenDoi(soBe[i]);
        if(nho != 0){
            soTru++;
            nho = 0;
        }
        if(soBiTru >= soTru){
            hieu[i] = soBiTru - soTru;
        } else{
            hieu[i] = soBiTru + 10 - soTru;
            nho = 1;
        }
    }
    for(int i = 0; i < soLon.length(); i++){
        if(hieu[i] != -1){
            cout<<hieu[i];
        }
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while (a--){
        string n,m; cin>>n>>m;
        tinhHieu(n,m);
    }
    return 0;
}