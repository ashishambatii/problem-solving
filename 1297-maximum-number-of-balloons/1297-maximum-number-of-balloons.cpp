class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>map;
        map['a']=0;
        map['b']=0;
        map['l']=0;
        map['o']=0;
        map['n']=0;
        for(int i=0;i<text.size();i++){
            map[text[i]]++;   
        }
        return min({map['a'], map['b'], map['n'],map['l']/2,map['o']/2});
    }
};