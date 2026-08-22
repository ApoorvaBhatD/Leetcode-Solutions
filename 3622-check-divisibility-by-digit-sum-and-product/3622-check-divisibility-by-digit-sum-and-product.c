bool checkDivisibility(int n) {
    int div=n;
    int prod=1,sum=0;
    while (div>0){
        int digit=div%10;
        prod=prod*digit;
        sum=sum+digit;
        div=div/10;
    }
    int num= sum+prod;
    if (n%num==0) return true;
    else return false;
}