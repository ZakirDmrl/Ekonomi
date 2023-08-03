import matplotlib.pyplot as plt

dosya_yolu = "output/file.txt"
sayac = {}
with open(dosya_yolu,"r") as dosya:
    satirlar = dosya.readlines()

for satir in satirlar:
    try:
        sayi = int(satir.strip()) # strip() satır sonu karakterini almamak için
        if (sayi - 1000) % 100 == 0:
            sayac[sayi] = sayac.get(sayi,0) + 1 
    except ValueError:
        continue

# Sayıları küçükten büyüğe sıralalama
sayilar, adetler = zip(*sorted(sayac.items()))

# Kontrol 
for sayi, adet in sayac.items():
    print(f"{sayi}: {adet} adet")

# Grafik olusturma:
plt.plot(sayilar, adetler, marker='o', linestyle='-', color='b')
plt.xlabel("Sayılar")
plt.ylabel("Adetler")
plt.title("Sayı-Adet Grafiği")
plt.grid(True)
plt.show()