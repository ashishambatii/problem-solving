class Solution {
public:
    bool checkDivisibility(int n) {
        int pro = 1;
        int sum =0;
        int cp = n;
        while(n>0){
            int a = n%10;
            n=n/10;
            pro*=a;
            sum+=a;
        }
        int b = pro + sum;
        return cp%b == 0;
    }
};