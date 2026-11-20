#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i==n){
            if(n%2 == 1){
                cout << "I hate it";
                break;
            }else{
                cout << "I love it";
                break;
            }
        }
        
        if(i%2 == 1){
            cout << "I hate that ";
        }else{
            cout << "I love that ";
        }
    }
	return 0;
}
