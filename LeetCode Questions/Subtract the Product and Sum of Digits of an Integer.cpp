//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int rem;

        while(n){
        rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
        }
        return prod-sum;
    }
};