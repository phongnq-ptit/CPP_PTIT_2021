#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        long long kq = 0;
        for(long long i = 0; i < n.length() - 1; i++){
            for(long long j = i + 1; j < n.length(); j++){
                if(n[i] == n[j]) kq++;
            }
        }
        cout<<kq + n.length()<<endl;
    }
    return 0;
}