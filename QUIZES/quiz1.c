// 1. Removing Duplicates from sorted arrays

int removeDuplicate(int * nums, int numsSize) {
    if numsSize == 0 return 0;
    
    int j = 0;
    for (int i=1; i < numsSize; i++) {
        if (numsSize[i] != nums[j] {
            j++
            nums[j] = nums[i]
        }
    }
    return j + 1;
}
// Explanaation
/*In the example above, two pointers are used:
	j --> keep track of where to place
	i --> Scan through the array
Since the arrays are sorted, duplicate numbers are adjacent to each other. This way, when a unique number is identified, it is moved to position j + 1 and j is incremented. 
This ensures removal of duplicates.
*/
