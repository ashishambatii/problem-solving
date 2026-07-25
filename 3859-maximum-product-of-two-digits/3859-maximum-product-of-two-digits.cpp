class Solution {
public:
    int maxProduct(int n) {
       //sorry , i really mean it  
       priority_queue<int> pq;
       while(n>0){
         int rem=n%10;
         pq.push(rem);
         n=n/10;

       }
       int a=pq.top();
       pq.pop();
       int b=pq.top();
       pq.pop();
       return a*b;
    }
};