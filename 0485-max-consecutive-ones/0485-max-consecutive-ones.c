int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0;
    int*counter=(int *)malloc(numsSize*sizeof(int));
    for (int i=0;i<numsSize;i++){
        if (nums[i]==0) count = 0;
        else {
            count++; 
        }
        counter[i]=count;
    }
    int max=counter[0];
    //int length = sizeof(counter)/sizeof(counter[0]);
    for (int j=0;j<numsSize;j++){
        if (counter[j]>max) max=counter[j];
    }
    return max;
}