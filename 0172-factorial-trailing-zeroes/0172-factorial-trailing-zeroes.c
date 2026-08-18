int trailingZeroes(int n) {
    int x=n,count=0;
    int k=5;
    if (n<5) return 0;

    while (x>0){
        x=n/k;
        count=count+x;
        k=k*5;
    }
    return count;

    
}