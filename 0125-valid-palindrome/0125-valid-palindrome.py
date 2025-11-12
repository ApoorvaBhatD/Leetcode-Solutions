class Solution:
    def isPalindrome(self, s: str) -> bool:
        charlist=[]
        for char in s:
            if char.isalnum():
                charlist.append(char.lower())
        return True if charlist==charlist[::-1] else False


