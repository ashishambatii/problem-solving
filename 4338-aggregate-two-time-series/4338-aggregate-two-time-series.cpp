class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>>ans;
        int i=0;
        int j=0;
        while(i<series1.size() && j<series2.size()){
            ans.push_back({min(series1[i][0],series2[j][0]),(series1[i][1]+series2[j][1])});
            if(series1[i][0]<series2[j][0])i++;
            else if(series1[i][0]>series2[j][0])j++;
            else{
                i++;
                j++;
            }
        }
        while(i<series1.size()){
            ans.push_back(series1[i]);
            i++;
        }
        while(j<series2.size()){
            ans.push_back(series2[j]);
            j++;
        }
        return ans;
    }
};