class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        n=len(s)
        ans=0
        j=0
        for i in range (n):
            maxCost-=abs(ord(s[i])-ord(t[i]))
            while maxCost<0:
                maxCost+=abs(ord(s[j])-ord(t[j]))
                j+=1
            ans=max(ans,i-j+1)
        return ans