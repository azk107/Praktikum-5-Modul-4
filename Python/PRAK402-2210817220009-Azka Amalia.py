angka = int(input())
for i in range (1,angka+1):
    if i%2==1:
        print(i, end=' ')
print("\n")
j = angka
while j>=1:
    if j%2==0:
        print(j, end=' ')
    j-=1