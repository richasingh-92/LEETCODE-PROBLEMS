class Solution {
public:
    bool isHappy(int n) {
        int temp=0;  // temp is sum of square of digits
        int flag = 0;
        while(1){
            
            while(n>0){
                int lastDigit = n%10;
                temp+=(lastDigit*lastDigit);
                n/=10;
            } 

            if(temp==1){   // in single digits only 1 and 7 are happy 
                break;
            }
            if(temp/10==0 && temp!=7) {
                break;
            }

            n=temp;  // for computing next sum of squares od digits
            temp=0;  // reinitiating sum to 0
        }

        if(temp==1){
            flag=1;
        }

        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }

};