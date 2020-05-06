t = int(input())
while t:
    constraint = list(map(int, input().split()))
    f = (constraint[0] & constraint[2]) * (constraint[1] & constraint[2])
    z = constraint[2]
    for i in range(constraint[2]+1, constraint[3]):
        bitand = (constraint[0] & i)*(constraint[1] & i)
        if bitand > f:
            z = i

            f = bitand
    print(z)
    t -= 1
