### Optimal (Moore’s Voting Algo)

<aside>
⏰ `O(n+n) & O(1)`

</aside>

**Intuition:**

- You cannot cancel votes of the candidate who is in the majority.

**Algorithm:**

- Initialize a count variable to count votes for a particular candidate.
- Increment count, if curr vote is also for the candidate, otherwise decrement count.
- If count becomes 0, take the next element to be a candidate.
- The candidate whose votes remain after traversing the entire array is the winner, i.e., He’s in the majority.

After applying Moore’s voting algorithm, verify the candidate is indeed in the majority by traversing through the array and keeping count of candidate winner from Moore’s voting algorithm, if count > n / 2 he is indeed the winner.

