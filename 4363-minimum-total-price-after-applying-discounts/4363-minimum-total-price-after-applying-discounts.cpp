class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0;
        priority_queue<int>p;
         priority_queue<int>d;
        for(int i=0;i<prices.size();i++){
            p.push(prices[i]);
        }
        for(int i=0;i<discounts.size();i++){
            d.push(discounts[i]);
        }
        while(!p.empty()){
            if(!d.empty()){
            double a = (100-d.top())/100.0;
            ans+=(p.top()*a);
                p.pop();
                d.pop();
            }
            else{
                ans+=p.top();
                p.pop();
            }
        }
        return ans;
        
    }
};