#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int answers[t];
    int anscount = 0;
    while(t--){
        int n;
        cin >> n;
        int odd_count = 0, fourk_count = 0, twok_count = 0;
        int nums[n];
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 1){
                odd_count++;
            }else if(nums[i] % 4 == 0){
                fourk_count++;
            }else if(nums[i] % 2 == 0){
                twok_count++;
            }
        }

        answers[anscount] = max({twok_count, fourk_count, odd_count});
        anscount++;
    }

    for(int i=0; i<anscount; i++){
        cout << answers[i] << "\n";
    }
    return 0;
}