### Optimal

<aside>
⏰ O(n) & O(1)

</aside>

- Same intuition as Majority 1(Moore's Voting algorithm) for majority element but just we need to do this for now two elements as we can have two possible answers. Also **important to note** here is we have to take care of edge case if one counter is 0 we should check it’s not candidate 2 before making it new candidate, same thing if counter2 is 0, we need to make sure we are not making candidate 1 as candidate 2 also.
- After we have done the above step, we can do manual check on candidate and candidate 2 to make sure their count is > n/3.
