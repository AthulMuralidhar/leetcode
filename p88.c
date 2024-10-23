
int removeDuplicates(int* nums, int numsSize) {
    int occurance = 0;
    int k = 0;
    int index_to_be_replaced = 0;
    int prev = 0;

    for (int i; i < numsSize; i++ ) {
        if (i == 0) {
            prev = nums[i];
            occurance++;
            k++;
            continue;
        }

        if (nums[i] == prev) {
            occurance++;
            if (occurance == 3) {
                index_to_be_replaced = i;
                continue;
            }
            k++;
        } else {
            occurance = 1;
            if (i > index_to_be_replaced) {
                nums[index_to_be_replaced] = nums[i];
                index_to_be_replaced++;
            }
            k++;
        }

        prev = nums[i];
    }

    return k;
    
}
