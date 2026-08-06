class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        if (t==1):
            return n
        prod=1
        
        for i in range (1000):
            prod=1
            num=n
            while (n>0):
                prod=prod*(n%10)
                n=n//10
            if (prod%t==0):
                return num
            n=num+1


        