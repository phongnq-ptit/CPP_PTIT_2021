#include<bits/stdc++.h>

using namespace std;
// tối giản số lớn bằng cách 
//chia modulo cho số a (số cần so sánh hoặc cần xét cùng)
long long toiGianSoLon(long long a, string b){
    long long kq = 0;
    for(int i = 0; i < b.length(); i++){
        kq = kq*10 + b[i] - '0';
        kq %= a;
    }
    return kq;
}

void lcm_gcd_4(long long a, string b){
    long long so_b = toiGianSoLon(a, b);
    long long ucln = __gcd(a, so_b);
    cout<<ucln<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long a;
        string b;
        cin>>a>>b;
        lcm_gcd_4(a, b);
    }
    return 0;
}
