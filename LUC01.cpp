#include<bits/stdc++.h>

using namespace std;

bool check(long long n){
    string ktra = to_string(n); // chhuoi dang long long ---> string
    reverse(ktra.begin(), ktra.end()); // dao nguoc chuoi ktra
    if(ktra.find("68") != 0) return false;
    else return true;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        int kq = 0;
        if(check(n)) kq = 1;
        cout<<kq<<endl;
    }
    return 0;
}