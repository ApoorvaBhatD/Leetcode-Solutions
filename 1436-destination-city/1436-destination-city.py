class Solution:
    def destCity(self, paths: list[list[str]]) -> str:
        n=len(paths)
        count={}
        for a,b in paths:
            count[a]=count.get(a,0)-1
            count[b]=count.get(b,0)+1
        for city, score in count.items():
            if score==1:
                return city