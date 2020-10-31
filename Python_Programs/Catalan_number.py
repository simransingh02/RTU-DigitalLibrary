# CATALAN NUMBER:

#Question link :
# https://www.geeksforgeeks.org/program-nth-catalan-number/

# This is the code to find nth catalan number in the most efficient way using Dynamic Programming

def catalan_number(n):
    dp = [0 for i in range(n+1)]

    # SInce 0th and 1st catalan number are 1.
    dp[0],dp[1] = 1,1

    # To find ith catalan number
    for i in range(2,len(dp)):
        cur = 0
        for j in range(0,i):
            cur += dp[j]*dp[i-j-1]
        dp[i] = cur


    return dp[-1]

print(catalan_number(5))
 # This code is contributed by Kauhalendra Pandey

