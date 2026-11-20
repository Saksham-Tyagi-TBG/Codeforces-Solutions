#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int money = 0;
    int num = 0;
	int notes[5] = {100, 20, 10, 5, 1};
	int current = 0;
	while(money != n){
	    if(temp/notes[current] == 0){
	        current++;
	        continue;
	    }else{
	        num++;
	        temp -= notes[current];
	        money += notes[current];
	    }
	}
	cout << num;
}
