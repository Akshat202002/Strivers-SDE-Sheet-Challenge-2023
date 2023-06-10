// Problem -> https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge

int findDuplicate(vector<int> &arr, int n){
	
    // Optimal Approach 1 (Modifies the array) -> Also works if multiple duplicates
    // TC -> O(n) & O(1)
	for (int i = 0; i < n; i++) {
		int index = arr[i] % n;

		arr[index] += n;
		if (arr[index] / n >= 2) {
			return index;
		}
		
	}

	
    // Optimal Approach 2 (Floyd's Cycle Detection Algo) -> Doesn't Modify the array but works only for single duplicate
    // TC -> O(n) & O(1)
	int slow = 0, fast = 0;
	do {
		slow = arr[slow];
		fast = arr[arr[fast]];
	}while (slow != fast);

	int slow2 = 0;
	while (slow != slow2) {
		slow = arr[slow];
		slow2 = arr[slow2];
	}
	return slow;
}