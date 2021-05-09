#include<bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    while(a--){
        long long n; cin>>n;
        long long kq = 1;
        long long dem = 0;
        vector<long long> arr;
        while(n%2==0){
            arr.push_back(2);
            n/=2;
            dem++;
        }
        for(long long i = 3; i <= sqrt(n); i+=2){
            while(n%i==0){
                arr.push_back(i);
                n/=i;
                dem++;
            }
        }
        if(n > 2){
            arr.push_back(n);
            dem++;
        }
        sort(arr.begin(), arr.end());
        if(dem != 3) kq = 0;
        else{
            for(long long i = 0; i < arr.size() - 1; i++){
                if(arr[i] == arr[i + 1]){
                    kq = 0;
                    break;
                }
            }
        } 
        cout<<kq<<endl;
    }
    return 0;
}
