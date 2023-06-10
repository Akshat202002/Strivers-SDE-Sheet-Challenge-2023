// Problem -> https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge

vector<int> majorityElementII(vector<int> &arr)
{
    int count1 = 0;
    int count2 = 0;
    int candidate1;
    int candidate2;

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (count1 == 0 && candidate2 != arr[i]) {
            count1++;
            candidate1 = arr[i];
        }
        else if (count2 == 0 && candidate1 != arr[i]) {
            count2++;
            candidate2 = arr[i];
        }
        else if (arr[i] == candidate1) {
            count1++;
        }
        else if (arr[i] == candidate2) {
            count2++;
        }
        else {
            count1--, count2--;
        }
    }

    // Check
    count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (candidate1 == arr[i]) {
            count1++;
        }
        else if (candidate2 == arr[i]) {
            count2++;
        }
    }

    vector<int> ans;
    if (count1 > n / 3) {
        ans.push_back(candidate1);
    }
    if (count2 > n / 3) {
        ans.push_back(candidate2);
    }

    return ans;
}