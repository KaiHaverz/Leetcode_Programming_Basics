#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.push_back(0);
        digits[0] = 1;

        return digits;
    }
};

int main(){
    vector<int> digits = {9,9,9};
    Solution s;
    s.plusOne(digits);
    for(int i = 0; i < digits.size(); i++){
        cout << digits[i] << " ";
    }
    cout << endl;

    return 0;
}