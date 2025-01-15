bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && j != i) {
                return true;
            }
        }
    }
    return false;
}
