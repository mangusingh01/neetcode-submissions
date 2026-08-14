class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; 
        int n = digits.size(); 
        for(int i = n-1; i>=0; i--){
            int temp = digits[i]; 
            temp += carry; 
            carry = temp/10; 
            digits[i] = temp%10;
            if(carry == 0) break;
        }

        if(carry != 0){
            vector<int> temp{carry}; 
            for(auto a: digits) {
                temp.push_back(a);
            }
            return temp;
        }
        return digits;
    }
};
