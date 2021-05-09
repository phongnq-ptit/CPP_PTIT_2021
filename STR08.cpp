#include<bits/stdc++.h>

using namespace std;

// chuyen cac chu cai thanh " " (khoang trang)
string chuyenDoi(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] = ' ';
        }
    }
    return a;
}

// loai bo khoang trang
string trim(string a){
    string kq = "";
    int index1 = -1, index2 = -1;
    for(int i = 0; i < a.length(); i++){
        if(index1 == -1 && a[i] != ' '){
            index1 = i;
        }
        if(a[i] != ' '){
            index2 = i;
        }
    }
    if(index1 == -1) return "";
    for(int i = index1; i <= index2; i++){
        kq += a[i];
    }
    return kq;
}

// tach tu ra khoi chuoi (cu the la lay cac so trong bai nay)
vector<int> split(string a){
    vector<int> kq;
    vector<string> trungGian;
    int index1 = 0, index2 = 0;
    while(index1 < a.length()){
        index2 = a.find(" ",index1);
        if(index1 != index2) trungGian.push_back(a.substr(index1, index2 - index1));
        if(index2 == -1) break;
        else index1 = index2 + 1;
    }
    // loai bo tat ca khoang trang o 2 dau cua cac phan tu string trong vector<> trungGian
    // va chuyen tu dang string sang int roi luu vao vector<> kq
    for(int i = 0; i < trungGian.size(); i++){
        trungGian[i] = trim(trungGian[i]);
        int a = atoi(trungGian[i].c_str());
        kq.push_back(a);
    }
    return kq;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        n = chuyenDoi(n); // tat ca cac chu cai trong n chuyen ve " " (khoang trang)
        vector<int> kq; kq = split(n);
        int sum = 0;
        for(int i = 0; i < kq.size(); i++){
            sum += kq[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}