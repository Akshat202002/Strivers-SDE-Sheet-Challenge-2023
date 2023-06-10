// Problem -> https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge

//   Optimal(Dutch Nation Flag Algo)
// TC -> O(n) & SC -> O(1)
void sort012(int *arr, int n)
{
   

   // 0 -> low - 1 == 0
   // low -> mid - 1 == 1
   // high -> n - 1 == 2
   // mid -> high - 1 -> unsorted

   int low = 0, mid = 0, high = n - 1; 

    while (mid <= high) {
       // Case 1 -> arr[mid] == 0
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        // Case 2 -> arr[mid] == 1
        else if (arr[mid] == 1) {
            mid++;
        }
        // Case 3 -> arr[mid] == 2
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}