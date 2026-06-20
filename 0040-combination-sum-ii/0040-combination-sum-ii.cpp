class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>&vals,int target,int i){
           if(target==0){
            ans.push_back(temp);
            return ;
           }
          if(i>=vals.size() || target<0){
            return ;
          }
          //first pick that value
          temp.push_back(vals[i]);
          //then remove that value from the target
          //and move t the next index
          solve(vals,target-vals[i],i+1);
          //backtracking starts now (srinu daddy is my inspiration for backtracking)
            temp.pop_back();
          //and now we have second option to skip, here we have some duplicates in this question so we have to ignore those duplicates and move to the next unq element
          int j=i+1;
          while(j<vals.size() && vals[j]==vals[i]){
            j++;}
            // this way you are skipping the element and moving forward,
               
        solve(vals,target,j);  
        //so finally the soltuion or array whose combination sum equals to the target will be stored in the ans..      
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       //important thing is , you have to sort the array, because we have duplicates here in the array so in the soltuion (in the skipping section)we are skipping the elements which are dupliactes , so without sorting if the duplicates are displaced in random place it is hard to construct the soltuion
       sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return ans;
    }
};