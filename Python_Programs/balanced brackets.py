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

    if len(lst) == 0:
        return True

s = "[(a + b) + {(c + d) * (e / f)}"
ans = balanced_brackets(s)
if ans:
    print('true')
else:
    print('false')