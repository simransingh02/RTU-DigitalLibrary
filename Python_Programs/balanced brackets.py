# python program to check if the given expression consists of balanced set pf paranthesis or not.

#Approch :
# 1. Since each opening bracket should have a closing bracket, We have to keep check on each opening bracket and whether
# it has a closing bracket or not.

# For this purpose we use STACK and traverse the string once, and perform following operation.
    #1. Whenever a opening parenthesis is encountered , we push it into the stack.
    #2. If closing parenethesis is encountered, we check if the top element of the stack is its counterpart or not .


def balanced_brackets(s):
    lst = []
    o_brackets = "{[("
    c_brackets = "}])"

    for i in s:
        if i in o_brackets:
            lst.append(i)


        elif i in c_brackets:
            if len(lst) == 0:
                return False
            if i == ')':
                if lst[-1] == '(':
                    lst.pop(-1)
                else:
                    return False

            if i == ']':
                if lst[-1] == '[':
                    lst.pop(-1)
                else:
                    return False

            if i == '}':
                if lst[-1] == '{':
                    lst.pop(-1)
                else:
                    return False


# We perform operations as mentioned above and at last, if our stack is empty, we return True.
    if len(lst) == 0:
        return True

s = "[(a + b) + {(c + d) * (e / f)}"
ans = balanced_brackets(s)
if ans:
    print('true')
else:
    print('false')