#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        set<char> kq;
        for(int i = 0; i < n; i++){
            string value; cin>>value;
            for(long long j = 0; j < value.length(); j++){
                kq.insert(value[j]);
            }
        }
        for(set<char>::iterator i = kq.begin(); i != kq.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}