class Solution {
public:
    int sumBase(int n, int k) {
        string ans="";
         while(n>0){
            int rem=n%k;
            ans+=to_string(rem);
            n=n/k;
         }
       int a=0;
         for(int i=0;i<ans.size();i++)
         a+=ans[i]-'0';
         
         return a;

    }
};