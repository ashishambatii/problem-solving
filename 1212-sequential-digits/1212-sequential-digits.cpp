class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>ans;
        for(int size=0;size<9;size++){
            int i=0;
            int j=i+size;
            while(j<s.size()){
                string t=s.substr(i,j-i+1);
                if(stoi(t)>=low && stoi(t)<=high)ans.push_back(stoi(t));
                if(stoi(t)>high)return ans;
                i++;
                j++;
            }
        }
        return ans;
    }
};