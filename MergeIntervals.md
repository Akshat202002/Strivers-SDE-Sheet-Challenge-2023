### Bruteforce

<aside>
⏰ O(nlogn+2n) & O(n)

</aside>

- TC will not be n*n because if you see we are using break and continue and we are just checking every interval twice so it is more like nlogn + 2n.
- We can sort the array.
- Then, we can assume first interval is our hypothetical interval and now we will compare the first element of next interval with last element of previous interval if its smaller then we know they overlap and we will do this for rest of the intervals.
- 

### Optimal

<aside>
⏰ O(nlogn+n) & O(1)

</aside>

- Our goal is to reduce double cheking i.e to reduce 2n to n in our TC.
- So same approach just we can attack next interval to ourself if it overlaps and then check for next intervals directly.
- 

