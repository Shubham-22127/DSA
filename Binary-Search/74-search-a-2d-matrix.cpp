                      //BruteForce : O(m*n)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m= mat.size();   //matrix Size
        int n= mat[0].size();  //row Size

        for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){ 
                    if(mat[i][j]== t){ 
                      return true;  
                    }
                    
            }

        }
        return false;
    }
};

               //Optimised : O(log(m*n))  binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m= mat.size();   //matrix Size
        int n= mat[0].size();  //row Size
        int start = 0, end = m*n-1;
        while(start <= end)
        {
            int mid = start+(end-start)/2;
            int midValue = mat[mid/n][mid%n];

            if(midValue == t){
                return true;
            }
            else if(midValue < t){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
};               