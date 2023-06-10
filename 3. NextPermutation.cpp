// Problem -> https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

vector<int> nextPermutation(vector<int> &A, int n)
{
    // TC -> O(3n) & SC -> O(1)
    int peakIdx = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // peakIdx is the break point
            peakIdx = i;
            break;
        }
    }

    // If break point does not exist:
    if (peakIdx == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find index with the next greater element
    //         and swap it with arr[peakIdx]:

    for (int i = n - 1; i > peakIdx; i--) {
        if (A[i] > A[peakIdx]) {
            swap(A[i], A[peakIdx]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + peakIdx + 1, A.end());

    return A;
}