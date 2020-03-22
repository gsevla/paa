

while(True):
    while(True):
        s1, s2 = str(input()), str(input())

        k = len(s1)
        l = len(s2)
        MAX = 0
        i = 0
        j = 0

        for i in range(k):
            for j in range(l):
                # if s2[:j] == '': continue
                # print("{} == {}".format(s1[i], s2[:(j+1)]))
                if s1[i] == s2[j]:
                    # print(s1[i])
                    # print(s2[:j])
                    it = 1
                    # print("{} == {}".format(s1[i:(i+it+1)], s2[:(j+it)]))
                    # print("{} == {}".format(s1[i], s2[j]))
                    # print("{} == {}".format(s1[i:i+it], s2[j:j+it]))

                    # print("{} == {}".format(s1[i:i+it], s2[j:j+it]))
                    # input()
                    while s1[i:i+it] == s2[j:j+it]:
                        it += 1
                        # print("{} == {}".format(s1[i:i+it], s2[j:j+it]))
                    # if(it >= 8): print("{} == {}".format(s1[i:i+it], s2[j:j+it]))
                    MAX = max(MAX, it-1)
                    i = it-1
                    
                    # MAX = max(MAX, it)
                    break
                # print("{} == {}".format(s1[:i],s2[:j]))

        print(MAX)
