#include<bits/stdc++.h>

using namespace std;

void min_max(int m, int s){
    if(m == 1 && s == 0) cout<<0<<" "<<0<<endl;
    else if(9*m < s || s == 0) cout<<"-1 -1"<<endl;
    else{
        int max[m], min[m];
        memset(max, 0, sizeof(max)); memset(min, 0, sizeof(min)); 
        int s_max = s, s_min = s - 1;
        // tim max
        // gan lan luot tu trai sang phai
        for(int i = 0; i < m; i++){
            if(s_max == 0) break;
            if(s_max > 9){
                max[i] += 9;
                s_max -= 9;
            } else {
                max[i] += s_max;
                s_max -= max[i];
            }
        }
        // tim min
        // dat 1 o dau tien va gan lan luot tu phai sang trai
        min[0] = 1;
        for(int i = m - 1; i >= 0; i--){
            if(s_min == 0) break;
            if(s_min > 9){
                min[i] += 9;
                s_min -= 9;
            } else{
                min[i] += s_min;
                s_min -= min[i];
            };
        }
        // xuat ra dap an
        for(int i = 0; i < m; i++) cout<<min[i];
        cout<<" ";
        for(int i = 0; i < m; i++) cout<<max[i];
        cout<<endl;
    }
}

int main(){
    long long m,s; cin>>m>>s;
    min_max(m, s);
    return 0;
}