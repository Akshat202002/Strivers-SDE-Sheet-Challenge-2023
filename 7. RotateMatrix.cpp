// Problem -> https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // TC -> O(nm) & O(1)

  int row = 0, col = 0, maxRow = n, maxCol = m, previous, current;
    

    while (row < maxRow - 1 && col < maxCol - 1) {
        previous = mat[row + 1][col];
        for (int i = col; i < maxCol; i++) {
            current = mat[row][i];
            mat[row][i] = previous;
            previous = current;
        }

        row++;
        for (int i = row; i < maxRow; i++) {
            current = mat[i][maxCol - 1];
            mat[i][maxCol - 1] = previous;
            previous = current;
        }

        maxCol--;
        if (row < maxRow) {
            for (int i = maxCol - 1; i >= col; i--) {
                current = mat[maxRow - 1][i];
                mat[maxRow - 1][i] = previous;
                previous = current;
            }
        }

        maxRow--;
        if (col < maxCol) {
            for (int i = maxRow - 1; i >= row; i--) {
                current = mat[i][col];
                mat[i][col] = previous;
                previous = current;
            }
        }

        col++;
    }

    

}