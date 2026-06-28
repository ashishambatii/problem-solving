class Solution {
public:
    string largestGoodInteger(string num) {
        
        string ans ="";
        for(int i=0;i<num.size();i++){
            if(i+3>(num.size()))break;
            string temp="";
            for(int j=i;j<(i+3);j++){
                if(num[i]==num[j])temp+=num[j];
            }
            if(temp.size()==3)
            ans=max(temp,ans);
        }
        return ans;
    }
};