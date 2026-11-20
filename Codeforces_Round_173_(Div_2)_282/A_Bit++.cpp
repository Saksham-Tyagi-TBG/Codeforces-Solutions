#include <iostream>
#include <string>
using namespace std;

int main(){
    int X = 0;
    int n;
    string oper;
    cin >> n;
    while(n--){
        cin >> oper;
        if(oper == "X++" || oper == "++X"){
            X++;
        }else if(oper == "X--" || oper == "--X"){
            X--;
        }
    }
    cout << X;
    return 0;
}