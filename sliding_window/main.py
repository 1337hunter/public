n = int(input())
nums = [int(i) for i in input().split()]
window = int(input())
ls, rs, lm, rm = [], [], [], []
for i in range(window):
    ls += [nums[i]]
    if lm:
        if lm[-1] > nums[i]:
            lm += [lm[-1]]
        else:
            lm += [nums[i]]
    else:
        lm += [nums[i]]
print(lm[-1])
for i in range(window, n):
    if rs:
        rs.pop()
        rm.pop()
    else:
        for j in range(window - 1, -1, -1):
            rs += [ls[j]]
            if rm:
                if rm[-1] > ls[j]:
                    rm += [rm[-1]]
                else:
                    rm += [ls[j]]
            else:
                rm += [ls[j]]
        ls = []
        lm = []
        rs.pop()
        rm.pop()
    ls += [nums[i]]
    if lm:
        if lm[-1] > nums[i]:
            lm += [lm[-1]]
        else:
            lm += [nums[i]]
    else:
        lm += [nums[i]]
    if lm and rm:
        if rm[-1] > lm[-1]:
            print(rm[-1])
        else:
            print(lm[-1])
    elif lm:
        print(lm[-1])
    elif rm:
        print(rm[-1])
