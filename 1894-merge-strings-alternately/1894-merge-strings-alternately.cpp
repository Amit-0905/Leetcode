class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int maxlength = max(word1.length(),word2.length());
        int i = 0;
        while(i<maxlength){
            if(i<word1.length()){
                result += word1[i];
            }
            if(i<word2.length()){
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};