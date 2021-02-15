 Bu proje KTU Bilgisayar Mühendisliği Yapay Sinir Ağları dersi kapsamında geliştirilmiştir. 
 Proje kapsamında Visual Studio üzerinde C++/CLI arayüzü kullanılmıştır.
 Yapay Sinir Ağlarında (supervised) danışmanlı öğrenme etiketli verileri oluşturulan ağa verilip ağın nöronlarının ağırlıklarının güncellenmesi ile yapılabilir.Bu proje kapsamında çoklu sınıf ile bu sınıfların birbirinden ayrılması(sınıflandırılması)gerçeklenecektir. Bu eğitimi gerçekleştirirken hem ayrık hemde sürekli fonksiyon yardımı ile yapacağız. Ağımızın eğitimi sonlandığında sınıfları  birbirinden ayıran doğrular çizilecektir. Burada dikkat etmemiz gereken önemli noktalardan birisi örneklerimiz lineer olarak dağılması gerekmektedir. Çıktı katmanında sınıf sayısı kadar  nöron ve tek katlı ağ modeli kullanılmıştır. Nöronumuz 1. Örneğe +1 sonucunu verirken diğer örneklere -1 sonucunu vermektedir.

Programın çalışmasından kısaca bahsedecek olursak, sınıf sayısı seçildikten sonra altında radioButtonlar aktif olduktan sonra koordinat sisteminden ağın eğitimi için gerekli veri girişleri sağlanacaktır. Eğitim için ayrık ve sürekli fonksiyon kullanılmıştır. Programda maksimum 6 sınıf birbirinden ayrılabilir. Sürekli fonkisyon kullanılan eğitimde verilerin normalize edilmesi gerekmektedir. 

## Ayrık Fonksiyon ile Eğitim

Yapay sinir ağının eğitimi yapılırken kullanılan ayrık fonksiyonumuz sgn fonksiyonudur. 
Ağımızın çıktığı fNet  Matrisinde tutulmaktadır. 

 
![image](https://user-images.githubusercontent.com/22706674/107973210-03081080-6fc6-11eb-90f1-18748a172453.png)

	
Ağımızın eğitimi girdi değerlerine bias katsayısı eklendikten sonra random atanan nöron ağırlıkları  ile çarpılıp net değeri hesaplanmaktadır. Bu net değeri fNet fonksiyonuna gönderilip ağın örneklere bağlı olarak output değerlerini vermektedir. Eğer beklenen değerler ve output arasındaki fark 0 ise eğitim sonlanacaktır. Eğer error değeri 0 dan farklı ise w matrisi ile nöronların ağırlıkları error değeri 0 olana kadar tekrarlanacaktır. Burada dikkat edilmesi gereken tüm ağ matrislerde tutulmaktadır.

Sinir ağımız eğitildikten sonra örnek çıktımız aşağıdaki gibidir. Burada görüldüğü gibi 6 sınıf birbirinde one against all yaklaşımı ile sınıflandırma yapılmıştır. Görüldüğü üzere algoritmamızın toplam döngü sayısı 7882 olmuştur. Bu rakam yüksek olmasına rağmen sonuç kesindir.

![image](https://user-images.githubusercontent.com/22706674/107973256-13b88680-6fc6-11eb-89a4-8f37c3e6d6ef.png)

## Sürekli Fonksiyon ile Eğitim

Tek katmanlı ve çok sınıflı ağımızın eğitimini yaparken burada sürekli fonksiyon olarak  hiperbolik tanjant (tanh() ) fonksiyonu kullanılmıştır. Eğitimin hızlanması için ayrıca tanh fonksiyonunun türevi de kullanılmıştır. 

Programda aktivasyon fonksiyonu ve türevi aşağıdaki gibi tanımlanmıştır.

![image](https://user-images.githubusercontent.com/22706674/107973399-3a76bd00-6fc6-11eb-943c-4eef5f45ddcd.png)

Ağımızı eğitirken error oranımız 0.1 den küçük olduğunda eğitim sonlanmaktadır. Eğitimi  giriş değerlerini normalize edip veya direk girdi olarak verip gerçekleyebiliyoruz. 
Aşağıdaki örnek çıktılara bakıldığında normalize edilince eğitimin ne kadar hızlandığı net bir şekilde görebiliriz.

![image](https://user-images.githubusercontent.com/22706674/107973667-8d507480-6fc6-11eb-8c63-e550bc372712.png)


Normalize yapıldığında eğitim tamamlandıktan sonra sonuç net oalrak görülmesi için örneklere zoom uygulanmalıdır.

![image](https://user-images.githubusercontent.com/22706674/107973705-9a6d6380-6fc6-11eb-8df3-ade5d7b9c023.png)



