int missingNumber(int* nums, int numsSize) {
    int sum_n,sum_nums=0;
    sum_n=numsSize*(numsSize+1)/2;
    for(int i =0;i<numsSize;i++){
        sum_nums=sum_nums+nums[i];
    }
    return (sum_n - sum_nums);
    
    
}