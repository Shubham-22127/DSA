                                       // Recursive Approach
class Solution {
public:
    vector<string>ans;
    bool isValid(string current){
        int count = 0;
        int i = 0;
        while(i < current.length()){
            if(current[i] == '('){
                count++;
            }
            else{
                count--;
            }
            if(count < 0) return false;
            i++;
        }
        return count ==0;
    }
    void solve(string current, int n){
        if(current.length() == 2*n){
            if(isValid(current)){
                ans.push_back(current);
            }
            return;
        }
        current.push_back('(');
        solve(current,n);
        current.pop_back();

        current.push_back(')');
        solve(current,n);
        current.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string current = "";
        solve(current,n);
        return ans;
    }
};

                                        //Without using isValid Function
class Solution {
public:
    vector<string>ans;
    void solve(string current, int n, int open, int close){
        if(current.length() == 2*n){
            ans.push_back(current);
            return;
        }
        if(open < n){
        current.push_back('(');
        solve(current,n,open+1,close);
        current.pop_back();
        }

        if(close < open){
        current.push_back(')');
        solve(current,n,open,close+1);
        current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string current = "";
        int open = 0;
        int close = 0;
        solve(current,n, open, close);
        return ans;
    }
};                                        