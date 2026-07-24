int majorityElement(int* nums, int numsSize) {
    int candidate, count=0;
    for (int i=0;i<numsSize;i++){
        if (count==0) {
            candidate=nums[i];
            count++;
            continue;
        }
        else if (nums[i]==candidate) count++;
        else if (nums[i]!=candidate)count--;
        
    }
    return candidate;
}