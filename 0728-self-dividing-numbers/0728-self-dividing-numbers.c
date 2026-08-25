/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *arr = (int*)malloc((right - left + 1)*(sizeof(int)));
    int ind=0;
    for (int i=left; i<right+1; i++){
        bool check=true;
        int n=i;
        while (n>0){
            
            int digit = n%10;
            if (digit==0 || i%digit !=0) {
                check=false; 
                break;
            }
            n/=10;
                
            
        }
        if (check) {
            arr[ind++]=i;
        }

    }
    *returnSize=ind;
    return arr;
}