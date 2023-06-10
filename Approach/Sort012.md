**Intuition:**

- Use 3 pointers(low, mid, high)
- Everything from [0 to low - 1] → 0.
- Everything from [low, mid -1] → 1.
- Everything from [high + 1, n - 1] → 2.

In each iteration, we sort at least 1 element.
3 Cases Possible
1. arr[mid] == 0
2. arr[mid] == 1
3. arr[mid] == 2

If Case 1:
- Swap arr[mid] with arr[low]. So low will also increase by 1 to make our hypothesis of [0, low - 1] → 0 to be true.
- So, now unsorted portion will be from [mid + 1, high].

If Case 2:
- Just increment mid.

If Case 3:
- Swap arr[mid] with arr[high], so now unsorted portion will be from [mid, high - 1].