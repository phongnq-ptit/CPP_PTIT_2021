#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a; cin.ignore();
    while(a--){
        string n; getline(cin, n);
        int kq = 0;
        //loai bo cac ki tu '\n', '\t' thay bang ' '
        for(int i = 0; i < n.length() - 1; i++){
            if(n[i] == '\t' || n[i] == '\n'){
                n[i] = ' ';
            }
        }
        for(int i = 0; i < n.length() - 1; i++){
            if(n[i] != n[i + 1] && n[i] == ' ') kq++;
        }
        cout<<kq + 1<<endl;
    }
}