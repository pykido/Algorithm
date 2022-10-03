## 내 풀이 
# 입력 받기
N, M = map(int, input().split())

ch_pos = list(map(int, input().split()))  # 북쪽으로부터의 위치, 서쪽으로부터의 위치, 방향
direc = ch_pos[2]
pos = [ch_pos[0], ch_pos[1]]

# 0 : 북쪽, 1 : 동쪽, 2 : 남쪽, 3 : 서쪽
map_lst = [0] * N
for i in range(N):  # 1 : 바다, 0 : 육지
  map_lst[i] = list(map(int, input().split()))

while True : 
  if direc == 0 : 
    if direc[1] >= 1 and (map_lst[direc[0] - 1][]) 
      

