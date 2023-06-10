// Problem -> https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge
bool searchMatrix(vector<vector<int>>& mat, int target) {
    // TC -> O(log(mn)) & SC -> O(1)


    // We can consider this as 1d matrix of size m*n
    int lo = 0;
    int n = mat.size();
    int m = mat[0].size();
    if(!mat.size()) return false;
    int hi = (m * n) - 1;
    
    while(lo <= hi) {
        int mid = (lo + (hi - lo) / 2);
        if(mat[mid/m][mid % m] == target) {
            return true;
        }
        else if(mat[mid/m][mid % m] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return false;

}