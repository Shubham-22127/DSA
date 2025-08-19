class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<int>openings;
        for(int i = 0;i < n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                openings.push(s[i]);
            }
            else{
                if(openings.empty()) return false;
                char ch = openings.top();
                if((s[i] == ']' && ch == '[') || (s[i] == ')' &&
                ch == '(' )||(s[i] == '}' && ch == '{')){
                 openings.pop();
                }
                else return false;;
            }
        }
        return openings.empty();
    }
};