
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:  
            return ""
        min_len=len(strs[0])
        pref=[]
        for word in strs:
            if len(word) < min_len:
                min_len = len(word)
            
        for j in range(min_len):
           
            char = strs[0][j]
            if all(word[j] == char for word in strs):
                pref.append(char)
            else:
                break 

        return "".join(pref)
            

