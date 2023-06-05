// Problem -> https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

// Optimal(Kadane's Algorithm)
// TC -> O(n) & SC -> O(1)
long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = 0;
    long long currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum < 0) {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}