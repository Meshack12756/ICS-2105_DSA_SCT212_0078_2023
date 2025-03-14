// 2. Rotate Array

void rotate (int nums, int numsSize, int k) {
    k = k % numsSize return 0;
}
    void reverse (int nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            int [start] = nums [end];
            nums[end] = temp
            start++;
            end--;
        } 
    }
    reverse (nums, 0, numsSize - 1);
    reverse (nums, 0, k-1);
    reverse (nums, k, numsSize - 1)
// Explanation:
      /*The above algorithm reverses the arrangement of elements in the array to the right to achieve rotation.
Should k be higher than the array size, it is handled by the first expression in the algorithm. 
Since k is a non-integer, the elements in the array is reversed entirely, then reverse the first k elements then reverse the remaining elements, all to the right.
*/
