
while(True):
    T = int(input())

    for i in range(T):

        D, I, B = input().split()
        D = int(D)
        I = int(I)
        B = int(B)

        I_VALUES = [int(num) for num in input().split()]

        # B_DESC = []
        CUSTO_BOLOS = []

        for k in range(B):
            DB = [int(num) for num in input().split()]
            # I_PAIR = []

            Q = DB.pop(0)
            j = 1

            CUSTO_AUX = 0
            while j < Q*2:
                # print("j: {} | DB[j-1]: {} | DB[j]: {}".format(j, DB[j-1], DB[j]))
                # print("{} * {} = {}".format(DB[j], I_VALUES[DB[j-1]], (DB[j]*I_VALUES[DB[j-1]])))
                CUSTO_AUX += I_VALUES[DB[j-1]]*DB[j]
                j += 2
            CUSTO_BOLOS.append(CUSTO_AUX)
            
            # print('k: {} | I: {}'.format(k, I))
                
        # print('saiu do loop')
        print("R >> {}".format(int(D/min(CUSTO_BOLOS))))
