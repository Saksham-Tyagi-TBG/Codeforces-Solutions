#include <iostream>
using namespace std;

bool isDistinct(int n){
    int d1 = n%10;
    n /= 10;
    int d2 = n%10;
    n /= 10;
    int d3 = n%10;
    n /= 10;
    int d4 = n;
    int arr[] = {d1, d2, d3, d4};
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i] == arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        if(isDistinct(n)){
            cout << n;
            break;
        }
    }
    return 0;
}