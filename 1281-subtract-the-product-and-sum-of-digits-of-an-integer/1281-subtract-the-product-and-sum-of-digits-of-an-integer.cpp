class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int digit,prod = 1,sum=0;
        while(n!=0)
        {
            digit = n % 10;
            sum += digit;
            prod *= digit;
            n = n/10;
        }
        int res = prod - sum;
        return res;        
    }
};
