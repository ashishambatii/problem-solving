class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // ig this is  some preorder or post order expresion (jai naresh babu
        // sir)
        //order matters first pop is second number and the second pop is first number
        //srinivas please try this problem 

        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
          
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int opr = 0;

                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (tokens[i] == "+") {
                    opr= b+ a;
                } else if (tokens[i] == "-") {
                    opr = b - a;
                } else if (tokens[i] == "*") {
                    opr = a * b;
                } else if (tokens[i] == "/") {
                    opr = b / a;
                }
                s.push(opr);
            }
              else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};