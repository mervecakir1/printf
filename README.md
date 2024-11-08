# printf() fonksiyonunun dökümantasyonu

## 1. Giriş
Printf,fonksiyonunu yeniden yazmayı sağlar.Değişen sayıda argüman kullanmayı gösterir.
<br/>
## 2.Kurulum
Projeyi çalıştırmak için aşağıdaki adımları izleyin:

Proje dosyalarını klonlayın: `git clone` . <repo-url> <br/>
Proje dizinine gidin: `cd printf`. <br/>
`make` komutunu çalıştırarak projeyi derleyin.<br/>
## 3.Proje Yapısı
**ft_printf.c:** Değişken sayıda argümanı alarak, format dizesine göre bu argümanları yazdırmak.<br/>
**ft_printfunc.c:**  Her fonksiyon, belirli bir veri türünü işleyerek ekrana yazdırır ve kaç karakter yazdırıldığını sayar. Bu yapı, farklı veri türlerini (karakterler, stringler, tam sayılar, onaltılık sayılar, bellek adresleri) esnek bir şekilde işleyebilmek için kullanılır.<br/>
**Makefile:** Derleme işlemlerini yöneten make dosyası.<br/>
<br/>
# va_list Nedir?
`va_list`, değişken sayıda argüman alan bir fonksiyonun bu argümanları işlemek için kullandığı bir veri türüdür. Argümanları depolamak ve bu argümanlara erişimi sağlamak için kullanılır.
Bu sistem `stdarg.h` başlığı ile kullanıma sunulmuştur ve kullandığımız temel makroları içerir:<br/>
`va_list,
va_start,
va_arg,
va_end`<br/>
**`va_list`**: Değişken sayıda argümanları tutacak listeyi tanımlar. Argümanları okumak için bu listeye ihtiyaç vardır.<br/>
**`va_start`**: va_list yapısını başlatır ve argümanların listesini hazırlamaya başlar. Bu makro, değişken argümanların başladığı noktayı belirlemek için ilk sabit argüman olarak girilmelidir.<br/>
**`va_arg`**: Değişken argüman listesinden bir argüman alır ve bu argümanın türünü belirtir. Her `va_arg` çağrısı bir sonraki argümanı getirir.<br/>
**`va_end`**: Argüman listesinin kullanımını sonlandırır ve `va_list` yapısını serbest bırakır. Bu, her `va_start` işleminden sonra yapılmalıdır.<br/>
# Fonksiyonlar
*`ft_putchar`*<br/>
Tek bir karakter alır **(char c)**. Bu karakteri standart çıkışa (genellikle konsola) yazar.Yazılan karakter sayısını döner.<br/>
<br/>
*`ft_string`*<br/>
Bir string (karakter dizisi) alır **(char *str)**.Eğer string NULL ise, (null) metnini yazar.String'in her bir karakterini sırayla yazar ve toplam karakter sayısını döner.<br/>
<br/>
*`ft_int`*<br/>
Bir tam sayı alır **(int a)**.Eğer sayı negatifse, önce - işaretini yazar.Sayıyı pozitif hale getirir ve rakamlarını yazdırır. **-2147483648** özel durumunu da ele alır (bu, int'in minimum değeri).Toplam karakter sayısını döner.<br/>
<br/>
*`ft_hexadec`*<br/>
Bir tam sayı alır ve bu sayıyı hexadecimal (onaltılık) formatta yazar **(int a, char c)**.Eğer karakter c büyük harfse **(X)**, büyük harfler; küçük harfse **(x)**, küçük harfler kullanılarak yazdırılır.Rekürsif olarak hexadecimal değerleri yazar ve toplam karakter sayısını döner.<br/>
<br/>
*`ft_point`*<br/>
Bir işaretsiz uzun tam sayı alır **(unsigned long a)**.Bu sayıyı hexadecimal formatta yazdırır ve başına **0x** ekler.Yazdırılan toplam karakter sayısını döner.<br/>
<br/>
*`ft_unsignedec`*<br/>
Bir işaretsiz tam sayı alır **(unsigned int a)**.Bu sayıyı ondalık formatta yazdırır.Yazdırılan toplam karakter sayısını döner.<br/>
<br/>
• %c tek bir karakter yazdırır. <br/>
• %s bir karakter dizisi yazdırır. <br/>
• %p Void * pointer argümanını hexadecimal biçiminde yazdırır. <br/>
• %d 10 tabanında decimal sayı yazdırır. <br/>
• %i 10 tabanında integer yazdırır. <br/>
• %u 10 tabanında işaretsiz decimal sayı yazdırır. <br/>
• %x hexadecimal sayıyı (16 tabanında) küçük harfler ile yazdırır. <br/>
• %X hexadecimal sayıyı (16 tabanında) büyük harfler ile yazdırır. <br/>
• %% yüzde işareti yazdırır. <br/>




