// Problem -> https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge


// long long ncr(int n, int r)
// {
//     long long res = 1;
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// Helper Function
vector<long long> generateRow(int row) {
  long long ans = 1;
  vector<long long> ansRow;
  ansRow.push_back(1);
  for (int col = 1; col < row; col++) {
    ans = ans * (row - col);
    ans = ans / col;
    ansRow.push_back(ans);
  }
  return ansRow;
}

// Main Function
vector<vector<long long int>> printPascal(int n) 
{
  // TC -> O(n*n) & SC -> O(1)
  vector<vector<long long>> ans;
  for (int i = 1; i <= n; i++) {
    ans.push_back(generateRow(i));
    
  }
  return ans;

}
