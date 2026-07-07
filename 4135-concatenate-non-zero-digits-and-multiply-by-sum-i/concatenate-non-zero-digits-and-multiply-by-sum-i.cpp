class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int ad = 0;
        long long int sum = 0;
        int a = n;
        int i=0;
        while(a>0){
            if(a%10!=0){
                int s =a%10;
                ad = s*pow(10,i)+ad;
                sum += s;
                i++;
            }
            a /= 10;
        }
        long long int b = ad * sum;
        return b;
    }
};