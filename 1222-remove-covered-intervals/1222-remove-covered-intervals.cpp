class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        ranges::sort(intervals,
             {},
             [](vector<int>& x) {
                 return pair{x[0], -x[1]};
             });
             // didnt understand this according to the syntax but what it does is comapre the first element , if they are equal then compare the secnod , remember that the second pair is marked negtive during the comparision , so that greater element will be in the earlt indexs ,
                int maxi=0;
                int cnt=0;
             for(vector<int>&interval: intervals){
                if(interval[1]>maxi){
                    ++cnt;
                    maxi=interval[1];
                }
             }
             return cnt;


    }
};