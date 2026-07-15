class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evencnt=0;
        int oddcnt=0;
        int i=1;
        int sumodd=0;
        int sumeven=0;

        while(evencnt!=n && oddcnt!=n){
            if(i%2==0 && evencnt<n){
              sumeven+=i;
              evencnt++;
            }
            else if(i%2!=0 && oddcnt<n){
            sumodd+=i;
            oddcnt++;
            }
        }
        return gcd(sumeven,sumodd);
    }
};