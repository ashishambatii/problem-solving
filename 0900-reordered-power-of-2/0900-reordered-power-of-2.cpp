class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int s;
        string num = to_string(n);
        s=num.size();
        sort(num.begin(),num.end());
        long long power=1;
        while(to_string(power).size()<s){
            power*=2;
        }
        while(to_string(power).size()==s){
            string temp = to_string(power);
            sort(temp.begin(),temp.end());

            if(temp==num){
                return true;
            }
            power*=2;
        }
        return false;
    }
};