int removeDuplicates(int* nums, int numsSize) {
    int k = 2;

    if (numsSize == 1 || numsSize == 0) {
        k = numsSize;
        return k;
    }

    for (int i = 2; i < numsSize; i++) {
        if (nums[k-2]!=nums[i]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
    
}