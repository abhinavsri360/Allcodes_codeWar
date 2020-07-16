def solution(l, t):
    for i in range(len(l) + 1):
        for j in range(i+1, len(l)+1):
            s = sum(l[i:j])
            if s == t:
                return [i, j-1]
            if s > t:
                break
    return [-1, -1]


data = [4, 3, 10, 2, 8]
n = 12
print(solution(data, n))
