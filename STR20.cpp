#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a; cin.ignore();
    while(a--){
        string n; getline(cin, n); 
        // lay cac tu trong chuoi
        vector<string> split;
        int index1 = 0, index2 = 0;
        while(index1 < n.size()){
            index2 = n.find(" ",index1);
            if(index1 != index2) split.push_back(n.substr(index1, index2 - index1));
            if(index2 == -1) break;
            else index1 = index2 + 1;
        }
        // dao nguoi cac tu trong chuoi
        for(long long i = split.size() - 1; i >= 0; i--){
            cout<<split[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}