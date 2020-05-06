def solution(x, y):
    a = x+y-2
    b = a*(a+1)/2
    b = int(b+x)
    return str(b)


print(solution(3, 4))
