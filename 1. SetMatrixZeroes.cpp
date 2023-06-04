// Problem -> https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
 
// Bruteforce Approach 
// TC -> O((n*m)*(n + m)) & SC -> O(1)

// Helper Functions
void markRow(vector<vector<int>> &matrix, int i, int n, int m) {
	for (int j = 0; j < m; j++) {
		if (matrix[i][j] != 0) {
			matrix[i][j] = -1;
		}
	}
}

void markCol(vector<vector<int>> &matrix, int j, int n, int m) {
	for (int i = 0; i < n; i++) {
		if (matrix[i][j] != 0) {
			matrix[i][j] = -1;
		}
	}
}

// Main Function
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int cell = matrix[i][j];
			if (cell == 0) {
				markRow(matrix, i, n, m);
				markCol(matrix, j, n, m);
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == -1) {
				matrix[i][j] = 0;
			}
		}
	}

	return;
}

// Better Approach
// TC -> O(n*m) & SC -> O(n + m)
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();

	int rowArr[n] = {0};
	int colArr[m] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 0) {
				rowArr[i] = -1;
				colArr[j] = -1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (rowArr[i] == -1 || colArr[j] == -1) {
				matrix[i][j] = 0;
			}
		}
	}

	return;
}

// Optimal Approach
// TC -> O(n*m) & SC -> O(1)
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();


	int colZero = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 0) {
				matrix[i][0] = 0;

				if (j != 0) {
					matrix[0][j] = 0;
				}
				else {
					colZero = 0;
				}
			}
		}
	}

	// Mark 0s from (1, 1) to (n - 1, m - 1)
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (matrix[i][j] != 0) {
				if (matrix[i][0] == 0 || matrix[0][j] == 0) {
					matrix[i][j] = 0;
				}
			}
		}
	}

	// Mark 1st row and 1st col
	if (matrix[0][0] == 0) {
		for (int j = 0; j < m; j++) {
			matrix[0][j] = 0;
		}
	}

	if (colZero == 0) {
		for (int i = 0; i < n; i++) {
			matrix[i][0] = 0;
		}
	}

	return;
}
