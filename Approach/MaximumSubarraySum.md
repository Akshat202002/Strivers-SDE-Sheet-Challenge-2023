### Optimal (Kadane’s Algo)

<aside>
⏰ `O(n) & O(1)`

</aside>

Intuition:

- You can carry the sum as long as it is useful to us i.e. > 0, if < 0 reset sum to 0.

Algorithm:

- Keep 2 variables currSum and maxSum.
- Traverse through the array and add curr element to currSum.
- If newSum is < 0, reset currSum = 0.
- Otherwise, keep max of maxSum & currSum in maxSum.