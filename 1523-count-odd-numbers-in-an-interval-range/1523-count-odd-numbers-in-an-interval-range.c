int countOdds(int low, int high){
    int diff = (high - low)/2;
    if (high%2==0 && low%2==0){
        
    }
    else {
        diff++;
    }
    return diff;
}