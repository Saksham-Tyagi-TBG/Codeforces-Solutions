// 546A
#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int cost = (k * w * (w+1))/2;
    if(n < cost){
        cout << cost - n;
    }else{
        cout << 0;
    }
    return 0;
}