#include<bits/stdc++.h>

using namespace std;

string toLower(string a){
    string kq = "";
    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
    }
    return a;
}

int main(){
    string n; getline(cin, n);
    string kq = "";
    vector<string> split;
    int indexFirst = 0, indexLast = 0;
    while(indexFirst < n.size()){
        indexLast = n.find(" ", indexFirst);
        if(indexFirst != indexLast) split.push_back(n.substr(indexFirst, indexLast - indexFirst));
        if(indexLast == -1) break;
        else indexFirst = indexLast + 1;
    }
    for(int i = 0; i < split.size(); i++){
        split[i] = toLower(split[i]);
    }
    kq += split[split.size() - 1];
    for(int i = 0; i < split.size() - 1; i++){
        kq += split[i][0];
    }
    cout<<kq + "@ptit.edu.vn"<<endl;
}