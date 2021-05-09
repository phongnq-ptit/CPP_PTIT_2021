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

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        multiset<char> dapAn;
        int sum = 0;
        for(int i = 0; i < n.length(); i++){
            if(n[i] >= 'A' && n[i] <= 'Z'){
                dapAn.insert(n[i]);
            }
            if(n[i] >= '1' && n[i] <= '9'){
                sum += chuyenDoiSo(n[i]);
            }
        }
        for(multiset<char>::iterator i = dapAn.begin(); i != dapAn.end(); i++){
            cout<<*i;
        }
        cout<<sum;
        cout<<endl;
    }
    return 0;
}