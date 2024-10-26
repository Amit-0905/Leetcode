class Solution {
public:
    vector<int> addition(vector<int>&num1 , vector<int>&num2){
        vector<int> result;
        int n = num1.size();
        int m = num2.size();
        int carry = 0;
        int i =n-1,j=m-1;
        while(i>=0 || j>=0 || carry>0){
            int sum = carry;
            if(i>=0) {
                sum+=num1[i--];
            }
            if(j>=0){
                sum+=num2[j--];
            }
            carry = sum/10;
            result.insert(result.begin(),sum%10);
        }
        
        return result;
    }

    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> num2;
        int n=num.size();
        while(k>0){
            num2.insert(num2.begin(),k%10);
            k/=10;
        }
        return addition(num,num2);
    }
};