#include<bits/stdc++.h>

using namespace std;

bool Ok = true;

string doiViTri(string str){
    long long length_str = str.length();
    long long i = length_str - 1;
    while(i > 0 && str[i] >= str[i - 1]) i--;
    i = i - 1;
    if(i >= 0){
        long long j_tg;
        char max = '0';
        for(long long j = length_str - 1; j > i; j--){
            if(str[j] >= max && str[j] < str[i]) {
                j_tg = j;
                max = str[j];
            }
        }
        swap(str[i],str[j_tg]);
        return str;
    }  else return "-1";
}

int main(){
    int a; cin>>a;
    while(a--){
        string str; cin>>str;  
        str = doiViTri(str);
        cout<<str<<endl;
    }
}
