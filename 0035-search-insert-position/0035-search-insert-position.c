int searchInsert(int* nums, int numsSize, int target) {
    int low,high,mid,i,ind;
    low=0;
    high=numsSize-1;
    
    while (low<=high){
        mid=high + (low-high)/2;
        ind=mid;
        if (nums[mid]==target){
            return ind;}
        if (nums[mid]>target){
            high=mid-1;
        }
        else (low=mid+1);
    }
    return low;
}