#include <bits/stdc++.h>

using namespace std;

void nhapMang(long long arr[], long long n){
    for(long long i = 0; i < n; i++){
        cin>>arr[i];
    }
}

void sea16(long long ar1[], long long ar2[], long long ar3[], long long n1, long long n2, long long n3){
    int i = 0, j = 0, k = 0;
    bool ch = true;
    while (i < n1 && j < n2 && k < n3){
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]){   
            cout << ar1[i] << " "; 
            ch = false;  
            i++; j++; k++; 
        } else if (ar1[i] < ar2[j]) i++;
        else if (ar2[j] < ar3[k]) j++;
        else k++;
    }
    if(ch)cout<<"-1";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        long long n1, n2, n3; cin>>n1>>n2>>n3;
        long long arr1[n1], arr2[n2], arr3[n3];
        nhapMang(arr1, n1); nhapMang(arr2, n2); nhapMang(arr3, n3);
        sea16(arr1, arr2, arr3, n1, n2, n3);
    }
    return 0;
}