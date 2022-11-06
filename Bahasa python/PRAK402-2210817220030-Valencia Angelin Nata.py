batas = int(input())
for i in range (1, batas) :
    if i % 2 != 0 :
        print(i, end=' ')
print ("")
while batas > 0 :
    if batas % 2 == 0 :
        print(batas, end=' ')
    batas -= 1