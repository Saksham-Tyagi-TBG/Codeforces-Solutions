//263A
#include<iostream>
using namespace std;

int mod(int n){
    if(n>=0){
        return n;
    }else{
        return -n;
    }
}

int main(){
    int row, column;
    int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5];
    for(int i=0; i<5; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<5; i++){
        cin >> arr2[i];
    }
    for(int i=0; i<5; i++){
        cin >> arr3[i];
    }
    for(int i=0; i<5; i++){
        cin >> arr4[i];
    }
    for(int i=0; i<5; i++){
        cin >> arr5[i];
    }

    for(int i=0; i<5; i++){
        if(arr1[i] == 1){
            row = 1;
            column = i+1;
        }
    }
    for(int i=0; i<5; i++){
        if(arr2[i] == 1){
            row = 2;
            column = i+1;
        }
    }
    for(int i=0; i<5; i++){
        if(arr3[i] == 1){
            row = 3;
            column = i+1;
        }
    }
    for(int i=0; i<5; i++){
        if(arr4[i] == 1){
            row = 4;
            column = i+1;
        }
    }
    for(int i=0; i<5; i++){
        if(arr5[i] == 1){
            row = 5;
            column = i+1;
        }
    }
    
    cout << mod(3-row)+mod(3-column);
    return 0;
}