### Optimal 1

<aside>
⏰ O(n) & O(1)

</aside>
- We know elements are in range (1, n - 1).
- As one element is duplicate so we can reach that index it is pointing to twice and we can increase the element at that index with n.
- So after traversal we can check which element is now >= 2 * n and the index of that element will be our answer.
- Benefit of this approach is we can also use it for if array has multiple approaches.
> Credit -> Nishant Chahar

### Optimal 2 (Floyd's Cycle Detection) 
<aside>
⏰ O(n) & O(1)

</aside>
- as elements are between range (1, n - 1), cycle can't starts from arr[0]
- We can use concept of slow & fast pointer to detect cycle