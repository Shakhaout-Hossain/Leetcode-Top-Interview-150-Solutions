class Solution {
    

    public:
        bool Op(string str) {
            if ((str.size()==1)&&(str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')) {
                return true;
            }
            return false;
        }
        int evalRPN(vector<string>& tokens) {
            stack<long long> s;
            long long n = tokens.size(), i, x, y;
            for (i = 0; i < n; i++) {
                if (Op(tokens[i])) {
                    y = s.top();
                    s.pop();
                    x = s.top();
                    s.pop();
                    if (tokens[i][0] == '+')
                        s.push(x + y);
                    else if (tokens[i][0] == '-')
                        s.push(x - y);
                    else if (tokens[i][0] == '*')
                        s.push(x * y);
                    else if (tokens[i][0] == '/')
                        s.push(x / y);
                } else
                    s.push(stoi(tokens[i]));
            }
            return s.top();
        }
    };