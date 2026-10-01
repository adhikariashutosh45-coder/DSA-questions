class Solution {
public:
    int reverse(int x) {
         int integer=x;
        long long temp=0;

        while(integer !=0){
            long long z= integer%10;
            temp=temp*10+z;
            integer=integer/10;
        }

        if(temp > INT_MAX || temp < INT_MIN){
            return 0;
        }
        return temp;
    }
};