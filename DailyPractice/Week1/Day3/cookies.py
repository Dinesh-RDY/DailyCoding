from typing import List


def cookies(k:int, A:List[int])->bool:
    A = sorted(A)
    count = 0
    answer = []
    i = 0
    while(i != len(A)-1):
        if A[i] >= k:
            return count
        else:
            first_min = A[i]
            second_min = A[i+1]
            new_cookie = first_min + 2* second_min
            answer.append(new_cookie)
            count+=1
            i+=2
    return count

print(cookies(7 , [1,2,3,9,10,12]))
        