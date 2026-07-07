class Solution {
public:
    long long sumAndMultiply(int n) {
       if(n==0)return 0;
        string ans="";
        long long sum=0;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
               ans+=to_string(rem);
               sum+=rem;
            }
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        long long a = stoi(ans);
        return a* sum;
    }
};