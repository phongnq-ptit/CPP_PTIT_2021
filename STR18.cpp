#include<bits/stdc++.h>

using namespace std;
int dem = 0;
string a;
int demChuoi100(){
    for(int i = 0; i < a.length(); i++){
        if(a[i] == '1' && a[i + 1] == '0' && a[i + 2] == '0'){
            a.erase(i,3);
            dem += 3;
            demChuoi100();
        }
    }
    return dem;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin>>a;
        cout<<demChuoi100()<<endl;
        dem = 0;
    }
    return 0;
}