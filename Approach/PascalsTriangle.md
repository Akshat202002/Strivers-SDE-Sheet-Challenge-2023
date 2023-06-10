**Optimal**
    - To Generate row
        <aside>
        ⏰ O(N) & O(1)
        
        </aside>
        
        - We can find the overlapping in our calculation of each element of the row.
        - Each element can be made using the prev element.
        
        ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/7af124e0-e355-4939-a2e4-4b5d2239d964/Untitled.png)
        
        - So we can figure out the formula for this.
        - We know 1st and last element will be 1.
        - If we take col as 0 based indexing, we can generate following formula:
            
            ```ans * (row - col) / col```
    - To Generate Pascal Triangle
        **Optimal**
        
        <aside>
        ⏰ O(n^2) & O(1)
        
        </aside>
        
        - We can use code from above to generate each line.
    
   