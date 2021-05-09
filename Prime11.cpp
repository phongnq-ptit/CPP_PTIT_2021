#include<bits/stdc++.h>

using namespace std;

const long long soHoanHao[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long check = 0;
        for(long long i = 0; i < 7; i++){
            if(n == soHoanHao[i]) check = 1;
        }
        if(check == 1) cout<<1<<endl;
        else cout<<0<<endl;
    }
}