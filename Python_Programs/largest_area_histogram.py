# This the famous Largest Area Histogram question asked in many interviews.

#Question Statement :
# https://www.geeksforgeeks.org/largest-rectangle-under-histogram/


# We solve this problem using stack, Using the concept of next smaller element to the right and next smaller element to
#left


# Main function to calculate the largest area.
def largest_area_histogram(arr):
    lb = next_smaller_left(arr)
    rb = next_smaller_right(arr)
    max_area = 0
    for i in range(len(arr)):
        width = rb[i] - lb[i]-1
        area = arr[i] * width
        max_area = max(area,max_area)
    return max_area

# Helper function to find the next smaller element to the left.
def next_smaller_left(arr):
    lb = [0 for i in range(len(arr))]
    stack = []
    lb[0] = -1
    stack.append(0)

    for i in range(1,len(arr)):
        while len(stack) > 0 and arr[stack[-1]] > arr[i]:
            stack.pop(-1)

        if len(stack) == 0:
            lb[i] = -1
        else:
            lb[i] = stack[-1]

        stack.append(i)
    return lb

# Helper function to find the next smaller element to the right.

def next_smaller_right(arr):
    rb = [0 for i in range(len(arr))]
    stack = []
    rb[len(arr)-1] = len(arr)
    stack.append(len(arr)-1)

    for i in range(len(arr)-2,-1,-1):
        while len(stack) > 0 and arr[i] <= arr[stack[-1]]:
            stack.pop(-1)

        if len(stack) == 0:
            rb[i] = len(arr)
        else:
            rb[i] = stack[-1]

        stack.append(i)

    return rb


arr = [2,
5,
8,
5,
2,
8,
2,
8,
5,
4,
6]

print(largest_area_histogram(arr))

# This code is contributed by Kaushalendra Pandey.
