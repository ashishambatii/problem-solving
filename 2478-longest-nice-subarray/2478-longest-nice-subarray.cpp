class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0;
        int used=0;
        int n=nums.size();
        int answer=INT_MIN;
for (int right = 0; right < n; right++) {
      // so used is like a container where we store result of bits which we aim it to be zero

    while ((used & nums[right])!= 0) {
        used=used^nums[left];
        //here we use xor ->> xor the same bits will be equal to zero, so by this we can remove the number which is halting our process of making used as zero. so nums[left] was alreafy part of the used now we have to remove it so we use xor so that the number will be removed 
        left++;
    }
    // and by using or we are going to add the new number to used variable 
    used=used|nums[right];

   
    // finding the max 
    answer = max(answer, right - left + 1);
}
     return answer;
    }
};