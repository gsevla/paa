

while(True):
    while(True):
        s1, s2 = str(input()), str(input())

        i = 0
        j = len(s1)
        MAX = 0
        while(s1[i:j] != ''):
            # print(s1[i:j])
            while i < j:
                if s1[i:j] in s2:
                    MAX = max(MAX, len(s1[i:j]))
                i += 1
            i = 0
            j -= 1

        print(MAX)