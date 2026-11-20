#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << "YES";
        return 0;
    }
    int *left = &arr[0];
    int *right = &arr[n-1];
    
    while(left < right){
        if(*left != *right){
            cout << "NO";
            return 0;
        }
        left++;
        right--;
    }
    cout << "YES";
    return 0;
}