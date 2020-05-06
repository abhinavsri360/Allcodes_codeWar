def solution(data, n):
    b = data[:]
    lenb = len(b)
    for i in range(lenb):
        count = b.count(b[i])
        if count > n:
            lena = len(data)
            j = 0
            while j < lena:
                if data[j] == b[i]:
                    data.pop(j)
                    lena -= 1
                j += 1
    return data


data = [1, 2, 2, 3, 3, 3, 4, 5, 5]
n = 1
print(solution(data, n))
