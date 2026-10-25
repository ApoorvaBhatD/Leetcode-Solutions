class Solution:
    def validPath(self, n: int, edges: list[list[int]], source: int, destination: int) -> bool:
        graph=[[] for i in range(n)]
        for u,v in edges:
            graph[u].append(v)
            graph[v].append(u)
        
        visited=set()
        def dfs(node):
            if node==destination:
                return True
            visited.add(node)

            for next_node in graph[node]:
                if next_node not in visited:
                    if dfs(next_node):
                        return True
            return False
        return dfs(source)