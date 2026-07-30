class Solution {
public:
    int minimumPushes(string word) {
        //so from 2-9 there are 8 numbers, to get minimum cost we should assign each letter in each button , so for example there is a word which contain 5 letters , so we have 8 buttons each letter will can be in each button where the cost will be 1 for each letter and the final cost will be 5, for example the number of letters in a word are 9 , so here till 8 we can assign a button to each letter so the cost will be 1 for eah word but for the next word we should assign it in the same button where we have the required letter to get that letter it will be in the second index of that button so for pressing that button the cost will be 2 , 

        int p=0;
        int ans=0;
        for(int i=0;i<word.size();i++){
            if(i%8==0)p++;
            ans+=p;
        }
        return ans;
    }
};