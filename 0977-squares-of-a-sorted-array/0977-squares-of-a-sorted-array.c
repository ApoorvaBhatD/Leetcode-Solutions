/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int * arr=(int *)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int left=0, right=numsSize-1;
    int i=numsSize-1;
    while (left<=right && i>=0) {
        int t1 = nums[left]*nums[left];
        int t2=nums[right]*nums[right];
        if (t1>t2){
             arr[i]=t1; 
             left++; }
        else {
            arr[i]=t2;
            right--;
    }
    i--;
}
return arr;

}