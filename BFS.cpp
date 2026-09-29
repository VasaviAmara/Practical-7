from collections import deque
def bfs(adjacent):
v = len(adjacent)
visited = [False] * v
result = []
q = deque()
src = 0
q.append(src)
visited[src] = True
while q:
x = q.popleft()
result.append(x)
for i in adjacent[x]:
if not visited[i]:
visited[i] = True
q.append(i)
print(result)
v = int(input("Vertices: "))
e = int(input("Edges: "))
adjacent = [[] for i in range(v)]
for i in range(e):
a, b = map(int, input().split())
adjacent[a].append(b)
adjacent[b].append(a)
bfs(adjacent)
