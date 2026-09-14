bool isPowerOfThree(int n) {
    if (n<=0) return false;
    long long x=1;
    for (int i = 0; x<n ; i++){
        x=x*3;
    }
    if (x==n) return true;
    return false;
    
}