#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
    while(a != b){
        if(a > b) a = a - b;
        else b = b -a;       
    }
    return a;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long s1,s2; cin>>s1>>s2;
        long long bcnn = (s1*s2)/ucln(s1,s2);
        cout<<bcnn<<"  "<<ucln(s1,s2)<<endl;
    }
    return 0;
}
