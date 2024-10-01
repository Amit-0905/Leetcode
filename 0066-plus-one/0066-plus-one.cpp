// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int i= digits.size()-1;
//         while(true){
//             if(digits[i]==9){
//                 if(i-1){
//                     i=i-1;
//                 }
//                 digits.push_back(digits[i]);
//                 digits[i]=1;
//                 break;
//             }
//             else{
//                 digits[i]++;
//                 break;
//             }
//         }
//         return digits;
//     }
// };

class Solution {  
public:  
    vector<int> plusOne(vector<int>& digits) {  
        int i = digits.size() - 1;  
        while (true) {  
            if (digits[i] == 9) {  
                digits[i] = 0;    
                if (i > 0) {  
                    i--;   
                } else {  
                    digits.insert(digits.begin(), 1);
                    return digits;  
                }  
            } else {  
                digits[i] += 1;  
                return digits;   
            }  
        }  
    }  
};