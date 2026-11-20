// 266A

#include <iostream>
using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    string sequence;
    cin >> sequence;
    for(int i=0; i < n-1; i++){
        if(sequence[i]==sequence[i+1]){
            count++;
        }
    }
    cout << count;
    return 0;
}