int missingMultiple(int* nums, int numsSize, int k) {
    bool present[205] = {false};
    for (int i=0;i<numsSize;i++){
        if (nums[i]>0 && nums[i]<205){
            present[nums[i]]=true; 
        }
    }
    for (int i=1;;i++){
        int t=i*k;
        if (t>=205 || !present[t]) return t;
    }
    
}