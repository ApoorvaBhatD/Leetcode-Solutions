int search(int* nums, int numsSize, int target) {
    int i,loc,f=0, l=numsSize-1,m;
   
    while (f<=l){
    m= f+ (l-f)/2;
    if (nums[m]==target){
           return m;
        
    }
    if (nums[m]<target){
        f=m+1;
    }
    if (nums[m]>target){
        l=m-1;
    }

}
return -1;
}