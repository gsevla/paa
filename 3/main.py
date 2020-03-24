while True:
    s1 = input()
    s2 = input()

    k = len(s1)
    l = len(s2)
    MAX = 0
    i = 0
    j = 0
    it = 0
    phrase = ''

    for i in range(k):
        for j in range(l):
            if s1[i] == s2[j]:
                while s1[i] == s2[j]:
                    # print("{} | {} == {}".format(it, s1[i], s2[j]))
                    # print("f: {}".format(phrase))
                    # input()
                    i += 1
                    j += 1
                    it += 1
                    # print("{} ~ {} | {} ~ {}".format(i,k,j,l))
                    # print(it)
                    if(i >= k or j >= l):
                        break

                if(it != 0):
                    # print('Entrou')
                    MAX = max(MAX, it)
                    it = 0
                    break
                break

    print(MAX)
