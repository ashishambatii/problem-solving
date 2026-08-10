class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0;
        // priority_queue<int>p;
        //  priority_queue<int>d;
        // for(int i=0;i<prices.size();i++){
        //     p.push(prices[i]);
        // }
        // for(int i=0;i<discounts.size();i++){
        //     d.push(discounts[i]);
        // }
        // while(!p.empty()){
        //     if(!d.empty()){
        //     double a = (100-d.top())/100.0;
        //     ans+=(p.top()*a);
        //         p.pop();
        //         d.pop();
        //     }
        //     else{
        //         ans+=p.top();
        //         p.pop();
        //     }
        // }
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int j= discounts.size()-1;
        for(int i=prices.size()-1;i>=0;i--){
            if(j>=0){
              double a =(100-discounts[j])/100.0;
              ans+=prices[i]*a;
              j--;

            }
            else{
                ans+=prices[i];
            }
        }
        return ans;
        
    }
};