a=1
while a !=5:
    print("Pilih program")
    print("1.Penjumlahan")
    print("2.Pengurangan")
    print("3.Perkalian")
    print("4.Pembagian")
    print("5.Exit")
    print("Masukkan Pilihan : ", end=' ');pilihan=int(input())
    if pilihan>5 or pilihan<=0:
        print("Input anda salah, silahkan coba lagi\n")
    elif pilihan==5:
        print("Terimakasih, telah menggunakan kalkulator Azka Amalia")
        break
    else:
        print("Masukkan nilai pertama : ", end=' ');n1=float(input())
        print("Masukkan nilai kedua : ", end=' ');n2=float(input())
        if(pilihan==1):
            hasil = n1+n2
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n"%(n1,n2,hasil))
        elif(pilihan==2):
            hasil = n1-n2
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(n1,n2,hasil))
        elif(pilihan==3):
            hasil = n1*n2
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n"%(n1,n2,hasil))
        elif(pilihan==4):
            hasil = n1/n2
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n"%(n1,n2,hasil))