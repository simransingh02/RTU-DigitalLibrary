# Important interview to check whether the given string contain duplicate brackets or not.


# We solve this problem using a stack.
#Alogorithm :
# 1. If opening parenthesis is encountered, push it in the stack.
# 2. If closing paranthesis is encountered, pop till opening parenthesis is encounterd.
# 3. If any other char is encountered, push in the stack.

def contains_duplicates(s):
    lst = []
    for i in s:
        if i == '(':
            lst.append(i)
        elif i == ')':
            if lst[-1]   == '(':
                return True
            else:
                while lst[-1] != '(':
                    lst.pop(-1)
                lst.pop(-1)
        else:
            lst.append(i)

    return False

s = "(a+b)"
print(contains_duplicates(s))

# this code is contributed by Kaushalendra pandey