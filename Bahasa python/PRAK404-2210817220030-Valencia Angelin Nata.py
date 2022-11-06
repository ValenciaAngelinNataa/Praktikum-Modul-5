while True :
    print("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit")
    pil = int(input("Masukkan Pilihan: "))
    if pil > 5 :
        print("Input anda salah, silahkan coba lagi\n")
        continue
    elif pil == 5 :
        print("Terimakasih, telah menggunakan kalkulator Valencia Angelin Nata")
        break
    else :
        n1 =float(input("Masukkan nilai pertama: "))
        n2 =float(input("Masukkan nilai kedua: "))
        if pil == 1 :
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f""\n"% (n1, n2, n1+n2))
        elif pil == 2 :
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f""\n"% (n1, n2, n1-n2))
        elif pil == 3 :
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f""\n"% (n1, n2, n1*n2))
        elif pil == 4 :
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f""\n"% (n1, n2, n1/n2))
