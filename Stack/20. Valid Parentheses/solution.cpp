class Solution {
    public:
        bool isValid(string s) {
            stack < char > st;
            int n=s.size(),i;
            for(i=0; i<n; i++){
                if(st.empty())
                    st.push(s[i]);
                else if((st.top()=='('&&s[i]==')')||(st.top()=='{'&&s[i]=='}')||(st.top()=='['&&s[i]==']')){
                    st.pop();
                }
                else st.push(s[i]);
            }
            if(st.empty())return true;
            else return false;
        }
    };