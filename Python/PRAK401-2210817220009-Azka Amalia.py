angka = int(input())
simbol = input()
batas = 50
for i in range(1,batas+1):
    if i%angka==0:
        print(simbol, end=' ')
    else:
        print(i, end=' ')