# Description 
## Bu �devde, 2. �dev i�in yazd���n�z program� geni�letmeniz beklenmektedir. E�er 2. �devi yapmad�ysan�z, tabii ki, 2.�devdeki gereksinimleri de kar��layacak �ekilde tam bir program yazman�z gerekmektedir.

2. �devde, girilecek ara� plakalar�n� saklayan ve bu plakalar�n t�m�n� veya tek bir �ehirdeki plakalar� g�steren etkin
bir program yazman�z istenmi�ti. Uygulama detaylar�n� an�msamak i�in 2. �dev metnini okuyabilirsiniz. Bu �devde
program�n�zdan beklenen �zellikler ��yledir:
* Plaka kay�t sistemini, program kapan�p a��ld���nda, �nceden kaydedilen bilgileri kaybetmeyecek �ekilde
geni�letmeniz gerekmektedir. T�m plaka bilgileri, rastgele eri�imli (ikili/binary) bir dosyada saklanmal�d�r.

* Kullan�c�ya her seferinde, 2. �devdeki gibi yeni plaka giri�i, t�m plakalar�n listelenmesi, �ehir plaka kodu girilecek
�ehirdeki plakalar�n listelenmesi ve ilave olarak program� kapatma se�enekleri sunulmal�d�r.

* Kay�t ekleme s�ras�nda kullan�c�dan s�ras�yla, �ehir plaka kodu (1 � 81), harf kodu ve say� kodu al�nmal�d�r. �lgili kay�t�n
ge�ersiz veya zaten listede olan bir plaka olmas� durumunda kullan�c� uyar�lmal�d�r.

* T�m plakalar�n veya tek bir �ehirdeki plaklar�n listelenmesi i�leminden sonra, ilgili plaka bilgilerinin bir dosyaya
yaz�lmas�n� isteyip istemedi�i kullan�c�ya sorulmal�d�r. E�er kullan�c� listelenen plakalar�n dosyaya yaz�lmas�n�
isterse, herbir plaka bilgisi tek bir sat�rda olacak �ekilde bir s�ral� eri�imli (metin/text) dosyaya yaz�larak kullan�c�ya
dosya ismi g�sterilmelidir. Ayr�ca, bu dosyan�n ilk sat�r�na dosyada ka� tane plaka bilgisi oldu�u yaz�lmal�d�r. E�er
bir �ehirdeki plakalar istendiyse, ��kt� dosyas�n�n ad� �plakalar_sehirkodu.txt� olmal�d�r. �rne�in, �zmir�deki plakalar
listelendiyse, dosyan�n ad� �plakalar_35.txt� olmal�d�r. E�er t�m plakalar listelendiyse, dosyan�n ismi yaln�zca
�plakalar.txt� verilmelidir.

* Plakalar�n harf kodu en az 2, en �ok 3 harften olu�abilir ve karakter dizisi �eklinde tutulmal�d�r. Say� kodlar� ise en
az 2 en fazla 4 basamakl� tamsay�lardan olu�ur ve n�merik olarak tutulmal�d�r. Say� kodlar� 0 ile ba�lamaz.

* Programda (1) plaka ekleme, (2) �ehire g�re listeleme ve ��kt� (metin) dosyas�na yazd�rma, (3) girilen plakan�n
ge�erlili�ini s�nama, (4) plaka bilgilerini kay�t (ikili) dosyas�ndan okuma ve (5) plaka bilgilerini kay�t (ikili) dosyas�na
yazma i�lemlerini yapan, 5 ayr� fonksiyon kullan�lmal� (daha fazla da kullan�labilir, abartmadan) ve global de�i�ken
kullan�lmamal�d�r. (1) ve (3) numaral� fonksiyonlar, 2. �devdekiyle tamamen ayn� olup (2) numaral� fonksiyona, ��kt�
dosyas� yazd�rma �zelli�i eklenmelidir.

* Program�n do�as�na uygun yap�sal de�i�kenler (struct vb.) kullan�lmal�d�r.

**�pucu**:  Yaln�zca program ilk a��l�rken kay�t (ikili) dosyas�ndan (yani sabit diskten) okuma yap�larak, t�m plaka bilgileri
diziye (yani RAM�e) aktar�labilir. Program�n �al��mas� s�resince ger�ekle�tirilecek t�m i�lemler dizi �zerinde (yani
RAM�de) yap�l�p yaln�zca program kapat�l�rken bilgiler kay�t (ikili) dosyas�na (yani sabit diske) geri yaz�labilir. ��lemlerin
s�rekli dosya �zerinde yap�lmas� hem program�n yaz�lmas�n� zorla�t�racak hem de �ok say�da plaka olmas� durumunda
program�n �al��ma h�z�n� d���recektir.