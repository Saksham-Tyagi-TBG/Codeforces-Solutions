#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string mystr[n];
    for(int i=0; i<n; i++){
        cin >> mystr[i];
        int length = mystr[i].length();
        string ans = to_string(length-2);
        if(length > 10){
            mystr[i] = mystr[i][0] + ans + mystr[i][length-1];
        }
    }
    for(int i=0; i<n; i++){
        cout << mystr[i] << "\n";
    }
    return 0;
}