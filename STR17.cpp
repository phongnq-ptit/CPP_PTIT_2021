#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        for(long long i = 0; i < n.length(); i++){
            int check = 0;
            for(long long j = 0; j < n.length(); j++){
                if(i != j){
                    if(n[i] == n[j]) check = 1;
                }
            }
            if(check == 0) cout<<n[i];
        }
        cout<<endl;
    }
    return 0;
}