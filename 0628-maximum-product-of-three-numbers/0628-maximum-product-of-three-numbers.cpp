class Solution {
public:
    int maximumProduct(vector<int>& nums) {
          sort(nums.begin(),nums.end());

        bool flag=false;
        int praneeth=1;
        int i=0;
        int cnt=0;
        for(;i<2;i++){
            if(nums[i]<0){
            cnt++;
            praneeth*=nums[i];
            }
        }
        if(cnt==2)flag=true;
        
        
        
       
        
        if(nums[nums.size()-1]<0 && flag){
            praneeth*=nums[2];
            cnt++;
        }
        else if(nums[nums.size()-1]>0 && flag){
            praneeth*=nums[nums.size()-1];
            cnt++;
        }
        bool gay=false;
        if(cnt==3)
        gay=true;
        

        
        int sabrish=1;
         int n=nums.size()-1;
         for(int j=0;j<3;j++){
            sabrish*=nums[n--];
         }

        
        if( (gay && sabrish<praneeth) )return praneeth;
        
        return sabrish;

      
    }
};