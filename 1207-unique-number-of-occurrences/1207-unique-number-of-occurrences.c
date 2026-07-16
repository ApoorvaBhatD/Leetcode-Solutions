bool uniqueOccurrences(int* arr, int arrSize) {
    int occur[2002]={0};
    int i;
    bool seen[1001]={false};
    for (i=0;i<arrSize;i++){
        occur[arr[i]+1000]++;
    }
    for (int i=0;i<2002;i++){
        if (occur[i]>0){
            if (seen[occur[i]]){
                return false;
            }
            seen[occur[i]]=true;
        }
    }
    return true;

    
}