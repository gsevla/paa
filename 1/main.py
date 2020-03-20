
count = 0
n_values = None

def fib(n):
    global count
    if n_values[n][0]:
        count += n_values[n][1]
        return n_values[n]

    if n == 0:
        f = 0
    elif n == 1:
        f = 1
    else :
        f = fib(n-1) + fib(n-2)
    
    count += 1
    n_values[n][0] = f
    n_values[n][1] = count
    return f


n = int(input())
test_cases = []
while(n > 0):
    num = int(input())
    if num >= 1 and num <= 39:
        test_cases.insert(0, num)
        n -= 1
    else:
        continue

n_values = [[None, None]]*(max(test_cases)+1)
print(n_values)

for i in range(len(test_cases)):
    count = 0
    v = test_cases[i]
    f = fib(v)
    print("fib({}) = {} calls = {}".format(v, count, f))
print(n_values)
