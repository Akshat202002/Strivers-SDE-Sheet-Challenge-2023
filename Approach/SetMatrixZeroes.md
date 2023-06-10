### Bruteforce

<aside>
⏰ O(nm * (n+m) +(n*m)) & O(1)

</aside>

- Do what’s being told.
- For every zero you encounter, mark that row and column with -1 except zeroes(If we mark it with 0 then we will set whole matrix to zeroes)

### Better

<aside>
⏰ O(n*m) & O(n+m)

</aside>

- So we know if we encounter a 0 entire row and that column will have all entries as 0s.
- So what we can do is maintain two arrays- one for col and one for row.
- And now mark entry as 1 in those arrays.
- And after traversing the whole array, you can traverse those two arrays and mark a particular cell 0 if that row array has 0 or column array has 0 in that position.

### Optimal

<aside>
⏰ O(n*m) & O(1)

</aside>

- Instead of maintaing two seperate arrays for row and col, we can do the better version inplace to get SC as O(1)
- We can just use top row to mark column entries and left col to mark 0 entries and we can keep a extra variable col0 to keep overlapping row and col cell.
    
    > But we now can’t start traversing from beginning because if we start from beginning we will mark our inplace rows or cols also 0 first and that will cause inconsistencies. So we have to start from bottommost and start in reverse and keep that inplace row and col used for the last or you can start from second row and second col and go like that, just you have to skip marking inplace arrays used first.
    > 
    
    > The second edge case we have to keep in mind is of top-right cell as it is depended on our cell0 variable and our left most col, so start changing the top row first or left col first? We first have to do top row as if we start making 0s in left col we might make first col as 0 and now we can’t change topright cell to 0 as the entry is lost.
    > 
    