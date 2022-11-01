bil1 = int(input())
bil2 = int(input())
if bil1<bil2:
    i=bil1;j=bil2
    while i<=bil2 and j>=bil1:
       print("%d %d "%(i,j), end=' ')
       i+=1;j-=1
       if j==bil1-1: break
       else: print("-", end=' ')
else:
    i=bil1;j=bil2
    while i>=bil2 and j<=bil1:
        print("%d %d "%(i,j), end=' ') 
        i-=1;j+=1
        if j==bil1+1: break
        else: print("-", end=' ')