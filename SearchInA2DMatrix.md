### Optimal

<aside>
⏰ O(logmn) & O(1)

</aside>

- We can think this 2D matrix as 1D matrix of m*n elements according to given constraints.
- After that, we can just apply normal binary search
- To get row & col from mid we can use formula ```mat[mid/m]``` & ```mat[mid%m]``` where m is mat[0].size() i.e. col size.