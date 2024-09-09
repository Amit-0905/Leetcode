class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        int i =0;
        int l =x_str.length()-1;
        while(i<l){
            if(x_str[i]==x_str[l]){
                i++;
                l--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};