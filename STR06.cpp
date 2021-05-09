#include<bits/stdc++.h>

using namespace std;

string chuyenSang5(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] == '6') a[i] = '5';
    }
    return a;
}

string chuyenSang6(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] == '5') a[i] = '6';
    }
    return a;
}

int main(){
    int a; cin>>a;
    while(a--){
        string x, y; cin>>x>>y;
        string newX5 = chuyenSang5(x); string newX6 = chuyenSang6(x);
        string newY5 = chuyenSang5(y); string newY6 = chuyenSang6(y);
        long long min = atoll(newX5.c_str()) + atoll(newY5.c_str());
        long long max = atoll(newX6.c_str()) + atoll(newY6.c_str());
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}