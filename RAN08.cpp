#include<bits/stdc++.h>

using namespace std;

int sum_of_array(int arr[], int left, int right){
    int sum = 0;
    for(int i = left; i < right; i++){
        sum += arr[i];
    }
    return sum;
}

void ran08(int arr[], int n, int k){
    int left = 0, right = k;
    int max = sum_of_array(arr, left, right), index1, index2;
    left++; right++;
    while(right <= n){
        int sum = sum_of_array(arr, left, right);
        if(sum > max){
            max = sum;
            index1 = left; index2 = right;
        }
        left++; right++;
    }
    for(int i = index1; i < index2; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n, k; cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ran08(arr, n, k);
    }
    return 0;
}