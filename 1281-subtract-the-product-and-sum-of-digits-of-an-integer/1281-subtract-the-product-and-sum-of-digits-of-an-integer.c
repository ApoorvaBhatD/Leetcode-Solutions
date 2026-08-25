int subtractProductAndSum(int n) {
   int sum=0,prod=1;
   int digit;
   while (n>0){
    digit=n%10;
    sum+=digit;
    prod*=digit; 
    n=n/10;
   } 
   return prod-sum;
}