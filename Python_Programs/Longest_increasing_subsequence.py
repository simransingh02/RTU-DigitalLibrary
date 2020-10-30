#python program to find the length of the longest increasing subsequence in a given array most optimal way using dynamic
#programming.

#The given array must consist of Positive numbers only.

def l_i_s(a):
    n = len(a)
    dp = [0 for i in range(len(a))]   # Creating an array of size n.
    dp[0] = 1     # filling the first cell of array with the first element.
    for i in range(1,len(a)):
        c_max = 0   #setting the maximum number encountered as 0.
        for j in range(i):

            if a[j] < a[i]:
                if dp[j] > c_max:
                    c_max = dp[j]  # changing the max number encountered so far.
        dp[i] = c_max + 1  # filling the dp cell with maximum encountere number.

    return max(dp)  # after filling the complete array, the maximum lenght of is the maximum of all the entries in the dp.


#time complexity = O(N^2)
#space complexity = O(N)


a = [52,9,11,56,23,59,18,91,28,41,1,30]
print(l_i_s(a))


# This code is contributed by Kaushalendra Pandey.