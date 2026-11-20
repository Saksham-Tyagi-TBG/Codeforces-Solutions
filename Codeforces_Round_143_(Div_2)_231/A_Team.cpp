#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int i1, i2, i3;
    while(n--){
        cin >> i1 >> i2 >> i3;
        (i1+i2+i3 >=2) ? count++ : count=count;
    }
    cout << count;
    return 0;
}