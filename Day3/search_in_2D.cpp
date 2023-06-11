bool searchMatrix(vector<vector<int>>& mat, int target) {

    int m=mat.size();
    if(!m)return false;
    int n=mat[0].size();
    int row=0;
    for(int i=0;i<m;i++){
        if(mat[i][n-1]==target)return true;
        else if(mat[i][n-1]>target){
            row=i;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(mat[row][i]==target)return true;
    }
    return false;
        
}