int missingNumber(int* nums, int numsSize) {
    int sum_nums=0;
    for(int i =0;i<numsSize;i++){
        sum_nums=sum_nums+nums[i];
    }
    return ((numsSize*(numsSize+1)/2) - sum_nums);
    
    
}