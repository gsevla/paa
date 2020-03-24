# bolos da maria - uri 1608


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
            while j < Q*2:
                # print("j: {} | DB[j-1]: {} | DB[j]: {}".format(j, DB[j-1], DB[j]))
                CUSTO_BOLOS.append(DB[j-1]*DB[j])
                j += 2
            
            # print('k: {} | I: {}'.format(k, I))
                
        # print('saiu do loop')

        # B_DESC.append(DB)
        # VAL = I_VALUES[1]*
        # CUSTO_BOLOS.append()

        # for j in range(DB[0]):