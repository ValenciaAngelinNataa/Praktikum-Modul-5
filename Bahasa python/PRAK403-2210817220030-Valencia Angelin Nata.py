a1,a2 =input().split()
a1=int(a1) ; a2=int(a2)
if a1>a2:
        i=a1 ; j=a2
        while i>= a2 and j <=a1:
            print("%d %d"%(i, j), end='')
            if i==a2: break
            else : print(" - ", end='')
            i-=1;j+=1
else:
        i=a1 ; j=a2
        while i<=a2 and j >= a1:
            print("%d %d"%(i,j), end='')
            if i == a2 : break
            else : print (" - ", end='')
            i +=1 ; j -=1