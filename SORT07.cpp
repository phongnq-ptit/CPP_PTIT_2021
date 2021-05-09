#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long arr[n];
        long long arr_fake[n];
        for(long long i = 0; i < n; i++){
            cin>>arr[i];
            arr_fake[i] = arr[i];
        }
        sort(arr_fake, arr_fake + n);
        long long index1 = -1, index2 = -1;
        for(long long i = 0; i < n; i++){
            if(index1 == -1 && arr[i] != arr_fake[i]){
                index1 = i;
            }
            if(arr[i] != arr_fake[i]){
                index2 = i;
            }
        }
        cout<<index1 + 1<<" "<<index2 + 1<<endl;
    }
    return 0;
}