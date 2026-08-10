/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    int capacity = 200;
    char **words = malloc(capacity * sizeof(char *));
    int index=0;
    int target_ind =0;
    
    for (int i =1;i<=n && target_ind< targetSize; i++){
        words[index++] = "Push";
        if (i==target[target_ind]){
           target_ind++;
        }
        else {
            words[index++]="Pop";
        }
            
        }
    *returnSize = index;
    return words;
}