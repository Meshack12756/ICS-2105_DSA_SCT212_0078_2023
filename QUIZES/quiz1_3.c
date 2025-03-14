// 3. To check for the duplicates in an array

int compare (const void a, const void b) {
    return ((int a) - (int b))
}
bool contain_Duplicate (int nums, int numsSize) {
    if (numSize <= 1) return false;
    
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i-1]) {
          
            return true;
        }
    }
    
  return false;  
}

// Explanation:
/*
Qsort is used to first sort the items in the array.
After sorting, duplicates are adjacent to each other.
Then, the elements in the array are iterated through, checking the initial and predecessor element.
If a match is found, it returns “true”, else it returns “false”.
*/
