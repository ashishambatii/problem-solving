class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
         vector<int> start;

    stringstream ss1(startTime);
    string temp;

    while (getline(ss1, temp, ':')) {
        start.push_back(stoi(temp));
    }
      vector<int>end;
       stringstream ss2(endTime);
    

    while (getline(ss2, temp, ':')) {
        end.push_back(stoi(temp));
    }
    int total=0;
    total+=(end[0]-start[0])*3600;
    total+=(end[1]-start[1])*60;
    total+=(end[2]-start[2]);

    return total;

    }
};