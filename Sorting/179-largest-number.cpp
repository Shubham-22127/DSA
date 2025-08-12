class Solution {
public:
    string largestNumber(vector<int>& nums) {
        //Dest Faang
      int n = nums.size();
      vector<string>numString(n);
      for(int i = 0; i < nums.size();i++){
         numString[i] = to_string(nums[i]);
      }  
      auto  myComparator = [](string &s1, string &s2){
            if(s1+s2 > s2+s1){
                return true;
            }
            else{
                return false;
            }
        };
        sort(numString.begin(),numString.end(),myComparator);
        string result = "";
        if (numString[0] == "0") return "0";
        for(string &s : numString){
            result += s;
        }
        return result;
    }
};