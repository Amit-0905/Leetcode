// class Solution {
// public:
//     long int divide(int dividend, int divisor) {
//         int ans=-1;
//         bool flag=false;
//         if(dividend==1<<31 && divisor<0) return dividend/divisor;
//         if(dividend==1<<31 && divisor>0) return dividend/divisor;
//         if(dividend<0 && divisor<0){
//             flag=false;
//         }
//         else if(dividend<0 || divisor<0){
//             flag=true;
//         }
//         dividend=abs(dividend);
//         divisor=abs(divisor);
//         int start=0;
//         int end=dividend;
//         while(start<=end){
//             long int mid=start + (end-start)/2;
//             if(mid*divisor==dividend){
//                 ans=mid;
//                 break;
//             }
//             else if(mid*divisor<dividend){
//                 ans=mid;
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//         if(flag){
//         return -ans;
//         }
//         else {
//             return ans;
//         }
//     }
// };

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int s=1,e=abs(dividend),mid=0,ans=0;
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }
          if (divisor == 0 || (dividend == INT_MIN && divisor == 1)) 
            return INT_MIN;
        
        while(s<=e){
            mid=s+(e-s)/2;
            if(abs(divisor*mid)==abs(dividend))
            {
                ans=mid;
                break;
            }
            else if(abs(divisor*mid)>abs(dividend))
            e=mid-1;
            else
            {
                ans=mid;
                s=mid+1;
            }
        }
        if((divisor>0&&dividend>0)||(divisor<0&&dividend<0))
        return ans;
        else
        return -ans;
    }
};