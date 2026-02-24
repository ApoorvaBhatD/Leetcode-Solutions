class Solution:
    def numberOfSteps(self, num: int) -> int:
      n=num
      if n==0:
        return 0
      count = 0
      while (n!=0):
        mod=n%2
        if mod==1:
            n=n-1
            count+=1
        n=(n//2)
        count+=1
      return count-1
    
            
    
