#include<bits/stdc++.h>

using namespace std;

void ord07(int arr[], int n, int k){
    int left = 0, right = k;
    int max = arr[left];
    int index_max = left;
    for(int i = left + 1; i < right; i++){
        if(arr[i] > max){
            max = arr[i];
            index_max = i;
        }
    }
    while(right <= n){
        if(index_max > right - k){
            // thằng nào mạnh thằng đấy là vua
            if(arr[index_max] < arr[right - 1]) index_max = right - 1;
        } else{
            // trường hợp loại bỏ vua già
            // tìm vua mới lên ngôi
            max = arr[left];
            for(int i = left + 1; i < right; i++){
                if(max < arr[i]){
                    max = arr[i];
                    index_max = i;
                }
            }
        }
        cout<<arr[index_max]<<" ";
        left++; right++;
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        int n, k; cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        ord07(arr, n, k);
    }
    return 0;
}