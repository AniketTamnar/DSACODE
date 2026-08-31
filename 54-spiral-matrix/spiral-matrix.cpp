class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int srow=0;
        int scol=0;
        int erow=matrix.size()-1;
        int ecol=matrix[0].size()-1;
        vector<int>ans;

        while(srow<=erow && scol<=ecol){

            for(int i=scol; i<=ecol; i++){
               ans.push_back(matrix[srow][i]);
            }
            for(int j=srow+1; j<=erow; j++){
               ans.push_back(matrix[j][ecol]);
            }

            for(int i=ecol-1; i>=scol; i--){
                if(srow==erow){
                    break;
                }
               ans.push_back(matrix[erow][i]);
            }

            for(int j=erow-1; j>=srow+1; j--){
                if(scol==ecol){
                    break;
                }
               ans.push_back(matrix[j][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;
    }
};