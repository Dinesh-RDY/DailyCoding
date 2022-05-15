
from typing import List


def equalStacks(h1:List[int], h2:List[int], h3:List[int]):
    h1s = sum(h1)
    h2s = sum(h2)
    h3s = sum(h3)
    min_val =min(h1s,h2s,h3s)
    height = min_val
    while not (h1s == h2s and h3s == h2s):
        while h1s > min_val:
            h1s = h1s - h1[0]
            h1.remove(h1[0])
        while h2s > min_val:
            h2s -= h2[0]
            h2.remove(h2[0])
        while h3s > min_val:
            h3s -= h3[0]
            h3.remove(h3[0])
        min_val = min(h1s,h2s,h3s)
    return min_val
            
