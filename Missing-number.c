int missingNumber(int* nums, int numsSize) {
    int array_sum = 0;
    int correct_sum = (numsSize * (numsSize + 1)) / 2;
    for (int i = 0; i < numsSize; i++) {
        array_sum += nums[i];
    }

    return correct_sum - array_sum;
}
