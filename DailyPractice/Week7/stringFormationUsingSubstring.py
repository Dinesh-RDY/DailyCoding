def isRepeat(s):
    l = len(s)
    for i in range(1 , l):
        substring = s[0:i]
        n = int(l / i)
        if substring * n == s:
            return True
    return False
