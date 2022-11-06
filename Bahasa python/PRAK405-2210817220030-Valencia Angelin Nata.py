a, b = input().split()
a = int(a) ; b = int(b)
hasil = 0 ;total1 = 0 ; total2 = 0 ; i = 0
while i < a:
    i += 1 ; j = i
    if i == 0:
        break
    while j > 0:
        j -= 1
        print("(%d * %d)" % (j + 1, b), end=' ')
        if j > 0:
            print(" + ", end=' ')
    hasil = i * b
    total1 += hasil
    print(" = %d" % (total1))
    total2 += total1
print("%d"%(total2))

