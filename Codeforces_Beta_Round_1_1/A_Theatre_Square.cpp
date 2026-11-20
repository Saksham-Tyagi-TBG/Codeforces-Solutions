#include <iostream>
using namespace std;

long long int ceil(double n){
    if(n == (long long int)n){
        return n;
    }
    else{
        return (long long int)n+1;
    }
}

int main(){
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int ans = ceil((double)n/a) * ceil((double)m/a);
    cout << ans;
    return 0;
}