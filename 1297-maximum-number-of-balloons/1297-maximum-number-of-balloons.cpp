class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>map;
      
        for(int i=0;i<text.size();i++){
            map[text[i]]++;   
        }
        return min({map['a'], map['b'], map['n'],map['l']/2,map['o']/2});
    }
};