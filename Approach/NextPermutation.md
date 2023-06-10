### Optimal

<aside>
⏰ `O(3n) & O(1)`

</aside>

Intuition

- Consider words like car cat call in the dictionary; cat appears last because ca is common  long prefix that they all have in common.
- So next words appearing in dict have longer prefix match.
- Now consider `arr = [8, 2, 1, 5, 4, 3, 0, 0]` we can match prefix upto 8, 2 and rearrange 1,5,4,3, 0, 0 into 3,0,0,1,4,5 so ans is `[8,2,3,0,0,1,4,5]`

Algorithm

- So traverse from right and find element less than itself, once you find that keep the element greater than that at that position and rearrange the elements after it in sorted order/reverse order.
- So basically just find a dip from right and if no dip found until start, return the sorted array.

