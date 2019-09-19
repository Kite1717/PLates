# Description 
## Bu ödevde, 2. ödev için yazdýðýnýz programý geniþletmeniz beklenmektedir. Eðer 2. ödevi yapmadýysanýz, tabii ki, 2.ödevdeki gereksinimleri de karþýlayacak þekilde tam bir program yazmanýz gerekmektedir.

2. ödevde, girilecek araç plakalarýný saklayan ve bu plakalarýn tümünü veya tek bir þehirdeki plakalarý gösteren etkin
bir program yazmanýz istenmiþti. Uygulama detaylarýný anýmsamak için 2. ödev metnini okuyabilirsiniz. Bu ödevde
programýnýzdan beklenen özellikler þöyledir:
* Plaka kayýt sistemini, program kapanýp açýldýðýnda, önceden kaydedilen bilgileri kaybetmeyecek þekilde
geniþletmeniz gerekmektedir. Tüm plaka bilgileri, rastgele eriþimli (ikili/binary) bir dosyada saklanmalýdýr.

* Kullanýcýya her seferinde, 2. ödevdeki gibi yeni plaka giriþi, tüm plakalarýn listelenmesi, þehir plaka kodu girilecek
þehirdeki plakalarýn listelenmesi ve ilave olarak programý kapatma seçenekleri sunulmalýdýr.

* Kayýt ekleme sýrasýnda kullanýcýdan sýrasýyla, þehir plaka kodu (1 – 81), harf kodu ve sayý kodu alýnmalýdýr. Ýlgili kayýtýn
geçersiz veya zaten listede olan bir plaka olmasý durumunda kullanýcý uyarýlmalýdýr.

* Tüm plakalarýn veya tek bir þehirdeki plaklarýn listelenmesi iþleminden sonra, ilgili plaka bilgilerinin bir dosyaya
yazýlmasýný isteyip istemediði kullanýcýya sorulmalýdýr. Eðer kullanýcý listelenen plakalarýn dosyaya yazýlmasýný
isterse, herbir plaka bilgisi tek bir satýrda olacak þekilde bir sýralý eriþimli (metin/text) dosyaya yazýlarak kullanýcýya
dosya ismi gösterilmelidir. Ayrýca, bu dosyanýn ilk satýrýna dosyada kaç tane plaka bilgisi olduðu yazýlmalýdýr. Eðer
bir þehirdeki plakalar istendiyse, çýktý dosyasýnýn adý “plakalar_sehirkodu.txt” olmalýdýr. Örneðin, Ýzmir’deki plakalar
listelendiyse, dosyanýn adý “plakalar_35.txt” olmalýdýr. Eðer tüm plakalar listelendiyse, dosyanýn ismi yalnýzca
“plakalar.txt” verilmelidir.

* Plakalarýn harf kodu en az 2, en çok 3 harften oluþabilir ve karakter dizisi þeklinde tutulmalýdýr. Sayý kodlarý ise en
az 2 en fazla 4 basamaklý tamsayýlardan oluþur ve nümerik olarak tutulmalýdýr. Sayý kodlarý 0 ile baþlamaz.

* Programda (1) plaka ekleme, (2) þehire göre listeleme ve çýktý (metin) dosyasýna yazdýrma, (3) girilen plakanýn
geçerliliðini sýnama, (4) plaka bilgilerini kayýt (ikili) dosyasýndan okuma ve (5) plaka bilgilerini kayýt (ikili) dosyasýna
yazma iþlemlerini yapan, 5 ayrý fonksiyon kullanýlmalý (daha fazla da kullanýlabilir, abartmadan) ve global deðiþken
kullanýlmamalýdýr. (1) ve (3) numaralý fonksiyonlar, 2. ödevdekiyle tamamen ayný olup (2) numaralý fonksiyona, çýktý
dosyasý yazdýrma özelliði eklenmelidir.

* Programýn doðasýna uygun yapýsal deðiþkenler (struct vb.) kullanýlmalýdýr.

**Ýpucu**:  Yalnýzca program ilk açýlýrken kayýt (ikili) dosyasýndan (yani sabit diskten) okuma yapýlarak, tüm plaka bilgileri
diziye (yani RAM’e) aktarýlabilir. Programýn çalýþmasý süresince gerçekleþtirilecek tüm iþlemler dizi üzerinde (yani
RAM’de) yapýlýp yalnýzca program kapatýlýrken bilgiler kayýt (ikili) dosyasýna (yani sabit diske) geri yazýlabilir. Ýþlemlerin
sürekli dosya üzerinde yapýlmasý hem programýn yazýlmasýný zorlaþtýracak hem de çok sayýda plaka olmasý durumunda
programýn çalýþma hýzýný düþürecektir.