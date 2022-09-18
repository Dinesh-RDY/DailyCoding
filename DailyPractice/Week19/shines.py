def numOfIncSubseqOfSizeK(input1, input2, input3):
    k = input1
    arr = [i for i in range(input2 , input3 +1)]
    Sum =0
    n = len(arr)
    dp = [[0 for i in range(n)]
			for i in range(k)]

    for i in range(n):
    	dp[0][i] = 1
    for l in range(1, k):

	
    	for i in range(l, n):


			dp[l][i] = 0
			for j in range(l - 1, i):
				if (arr[j] < arr[i]):
					dp[l][i] += dp[l - 1][j]
			Sum += dp[l][i];	
	
	return Sum + n


