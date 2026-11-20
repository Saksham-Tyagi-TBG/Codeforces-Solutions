// 399A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> myvec;
    int mynum = 0;
    string input;
    cin >> input;
    int length = input.length();
    int start = 0;
    for(int i=start; i < length; i++){
        int count = 0;
        while(input[i] != '+' && i != length){
            i++;
            count++;
            continue;
        }
        myvec.push_back(stoi(input.substr(start, count)));
        start = i+1;
    }

    sort(myvec.begin(), myvec.end());
    int count=0;
    for(int x: myvec){
        if(count < myvec.size()-1){
            cout << to_string(x) << "+";
            count++;
        }
        else{
            cout << x;
        }
    }
    return 0;
}