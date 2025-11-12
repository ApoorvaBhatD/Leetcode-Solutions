class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result=[]
        count=0
        for num in range (left,right+1):
            num1=str(num)
            if '0' in num1:
                continue
            else:
                for i in range (0,len(num1)):
                    if num%int(num1[i])!=0:
                        count+=1
            if count==0:
                result.append(num)
            count=0
        return result
                        

            
