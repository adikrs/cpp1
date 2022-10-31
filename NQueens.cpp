class Solution {
public:
    void n_queen(vector<vector<string>>&ans, vector<vector<int>>& b, int i, int j, int n){
        if(i==n){
            vector<string>temp;
            for(int l=0; l<n; l++){
                string s;
                for(int m=0; m<n; m++){
                    if(b[l][m]==0) s += '.';
                    else s += 'Q';
                }
                temp.push_back(s);
            }
            ans.push_back(temp);
            return;
        }
        
        for(int k=j; k<n; k++){
            int flag = 0, flag1 = 0, flag2 = 0;
            for(int l=0; l<i; l++){
                if(b[l][k]==1){
                    flag++;
                    break;
                }
            }
            if(flag==0) for(int l=i-1, m=k-1; l>=0 && m>=0; l--, m--){
                if(b[l][m]==1){
                    flag1++;
                    break;
                }
            }
            if(flag==0 && flag1==0){
                for(int l=i-1, m=k+1; l>=0 && m<n; l--, m++){
                    if(b[l][m]==1){
                        flag2++;
                        break;
                    }
                }
            }
            if(flag==0 && flag1==0 && flag2==0){
                b[i][k] = 1;
                n_queen(ans, b, i+1, 0, n);
                b[i][k] = 0;
            }
        }
        return;
    }
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<vector<int>>board(n, vector<int>(n, 0));
        n_queen(ans,board,0,0,n);
        return ans;
    }
};
