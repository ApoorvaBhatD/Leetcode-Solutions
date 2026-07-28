int maxProduct(int* nums, int numsSize) {
    int n1=0,n2=0;
    int n1_ind;
    for (int i=0;i<numsSize;i++){
        if (nums[i]>n1) {
            n1=nums[i];
            n1_ind=i;
            }
    }
    for (int i=0;i<numsSize;i++){
        if (i!=n1_ind){
            if (nums[i]>n2) n2=nums[i];
        }
    }
    return (n1-1)*(n2-1);
}