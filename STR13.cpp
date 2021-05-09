#include<bits/stdc++.h>

using namespace std;
/*
abc
dem=0   kq=0
a   b   c
0   0   0
*/
void str13(string n, int k){
    int danhDau[300];
    int kq = 0;
    for(int i = 0; i < n.length(); i++){
        int dem = 0;
        memset(danhDau, 0, sizeof(danhDau));
        for(int j = i; j < n.length(); j++){
            if(danhDau[n[j]] == 0){
                dem++;  
            }
            danhDau[n[j]]++;
            if(dem == k) kq++;
            if(dem>k)break;
        }
    }
    cout<<kq<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        string n; 
        int k; cin>>n>>k;
        str13(n, k);
    }
    return 0;
}