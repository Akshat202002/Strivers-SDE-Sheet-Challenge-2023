// Problem: https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // TC -> O(nlogn+n) & SC -> O(1)
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();

    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        if (ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
    
}