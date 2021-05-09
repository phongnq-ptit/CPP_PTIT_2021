#include<bits/stdc++.h>

using namespace std;
// tìm x để n! = pow(p, x) ta có công thức
// x = [n / p] (phần nguyên của n chia nguyên cho p)
// chia đến khi n bằng 0
void prime8(int n, int p){
    int x = 0;
    while(n != 0){
        n /= p;
        x += n;
    }
    cout<<x<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n, p; cin>>n>>p;
        prime8(n, p);
    }
    return 0;
}