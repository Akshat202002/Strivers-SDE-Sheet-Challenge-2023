// Problem -> https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

int findMajorityElement(int arr[], int n) {
	// Optimal Approach
    // TC -> O(n) & O(1)
	int count = 0;
	int candidate = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] == candidate) {
			count++;
		}
		else {
			count--;
		}
		if (count == 0) {
			candidate = arr[i];
			count++;
		}
	}

	// Check if candidate is in majority
	count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == candidate) {
			count++;
		}
	}

	return count > n / 2 ? candidate : -1;
}