class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        stack<int> st;

    for (int x : arr) {
        if(st.empty() || x>=st.top()){
            st.push(x);
        }
        else{
            int maxi=st.top();
            st.pop();
    while (!st.empty() && st.top() > x) {
        st.pop();
    }
    st.push(maxi);
        }
}
    
return st.size();
    }
};