#include<bits/stdc++.h>

using namespace std;

void string05(string n){
    long long danhDau[1000]; memset(danhDau, 0, sizeof(danhDau));
    bool check = false;
    if(n.length()%2 == 0){
        for(int i = 0; i < n.length(); i++){
            int value = (int) n[i];
            danhDau[value]++;
            if(danhDau[value] > n.length()/2) check = true; 
        }
    } else{
        for(int i = 0; i < n.length(); i++){
            int value = (int) n[i];
            danhDau[value]++;
            if(danhDau[value] > n.length()/2 + 1) check = true; 
        }
    }
    if(check) cout<<0<<endl;
    else cout<<1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        string05(n);
    }
    return 0;
}
