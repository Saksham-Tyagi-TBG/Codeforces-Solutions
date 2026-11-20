//158A
#include<iostream>
using namespace std;

int main(){
    int n, k;
    int count = 0;
    cin >> n >> k;
    int arr[n];
    int ans = 0;
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    if(arr[k-1] == 0){
        for(int i=k-1; i>=0; i--){
            if(arr[i] > 0){
                cout << i+1;
                return 0;
            }
        }
        cout << 0;
        return 0;
    }
    if(arr[n-1] == arr[k-1]){
        cout << n;
        return 0;
    }
    for(int i=k-1; i<n; i++){
        if(arr[i] < arr[k-1]){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}