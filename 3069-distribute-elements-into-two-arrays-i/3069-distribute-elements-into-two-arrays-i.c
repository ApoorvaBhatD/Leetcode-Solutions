/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int *arr1=(int*)malloc(numsSize*sizeof(int));
    int *arr2=(int*)malloc(numsSize*sizeof(int));
    int *result=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    arr1[0]=nums[0];
    int a1=0,a2=0;
    arr2[0]=nums[1];
    
    for (int i=2;i<numsSize;i++){
        if (arr1[a1]>arr2[a2]){
            a1++;
            arr1[a1]=nums[i];
            
        }
        else {
            a2++;
            arr2[a2]=nums[i];
            
        }
    }
    int ind=0;
    for (int i=0;i<=a1;i++){
        result[ind++]=arr1[i];
    }
    for (int i=0;i<=a2;i++){
        result[ind++]=arr2[i];
    }
    return result;
}