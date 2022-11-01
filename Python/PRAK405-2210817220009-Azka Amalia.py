baris=int(input())
angka=int(input())
for i in range(1,baris+1):
    j=i
    while j>1:
        print("(%d*%d)+"%(j,angka), end='');j-=1
    bil1=1;hasil=(i*angka)
    while bil1<i:
        hasil+=(bil1*angka);bil1+=1
    print("(%d*%d)=%d"%(j,angka,hasil))
bil2=1;bil3=1;jumlah=0
while bil2<=baris:
    jumlah+=bil3*angka;bil3+=bil2+1;bil2+=1
print("%d"%(jumlah))