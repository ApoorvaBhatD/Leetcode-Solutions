int maxProduct(int* nums, int numsSize) {
    int swap;
    for (int i=0;i<numsSize-1;i++){
        swap=0;
        for (int j=0;j<numsSize-1-i;j++){
            if (nums[j]>nums[j+1]){
                int t = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=t;
                swap=1;
            } 
        }
        if (swap==0) break;
    }
    return (nums[numsSize-1]-1)*(nums[numsSize-2]-1);
}