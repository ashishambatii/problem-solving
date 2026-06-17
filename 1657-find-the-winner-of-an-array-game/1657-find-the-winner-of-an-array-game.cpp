class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k==1){
            return max(arr[0],arr[1]);
        }
        if(k>=arr.size()){
            int maxi=0;
            for(int i =0;i<arr.size();i++){
                maxi=max(maxi,arr[i]);
            }
            return maxi;
        }
        int curr_winner=arr[0];
        int cnt=0;
        for(int i=1;i<arr.size();i++){
            if(curr_winner>arr[i]){
                cnt++;
            }
            else{
                curr_winner=arr[i];
                cnt=1;
            }
            if(cnt==k){
                return curr_winner;
            }
        }
        return curr_winner;
    }
};