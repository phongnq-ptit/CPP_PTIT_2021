#include<bits/stdc++.h>

using namespace std;

int str04(string n, int key){
    int dem = 0;
    for(int i = 0; i < n.length(); i++){
        int value = 0;
        for(int j = i; j < n.length(); j++){
            value = value*10 +  n[j] - '0';
            value %= key;
            if(value == 0) dem++;
        }
    }
    return dem;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; cin>>n;
        cout<<str04(n, 8) - str04(n, 24)<<endl;
    }
    return 0;
}