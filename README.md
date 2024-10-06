<p align="center">
  <img src="https://github.com/omrfrkzu/omrfrkzu/blob/6a582a20ae457bbd03395ae55c6938d79e81c1c9/Banners/LIBFT%20YOUR%20OWN%20LIBRARY.png">
</p>

<p align="center">
	<a href='https://www.linkedin.com/in/omrfrkzu/' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/omkuzu' target="_blank"><img alt='42' src='https://img.shields.io/badge/42-Kocaeli-Kocaeli'/></a>
</p>

<p align="center">
	<a href="#hakkinda">Hakkında</a> •
	<a href="#nasil-kullanilir">Nasıl Kullanılır</a> •
	<a href="#mandatory">Zorunlu</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#contributing">Katkıda Bulunma</a> •
	<a href="#license">Lisans</a>
</p>

## HAKKINDA
42'deki ilk proje olan libft, C programlamadaki standart fonksiyonların nasıl çalıştığını anlamak amacıyla bu fonksiyonları sıfırdan yazarak kişisel bir kütüphane oluşturmayı içerir. Bu proje çok önemlidir çünkü bu kütüphane, 42'deki ilerideki ödevlerde kullanılacaktır.

Eğer bir 42 öğrencisiyseniz, kodlarınızı kendiniz yazmanız ve test etmeniz şiddetle tavsiye edilir. Sadece kısmen anladığınız kodları kopyalamak yerine, sürece dahil olmak çok daha faydalı olacaktır. Piscine’i tamamladıysanız, bu projeyi kendi başınıza halledebilmeniz için bir neden yok! Sabırlı ve dikkatli olun.

- [Konu](https://github.com/omrfrkzu/libft/blob/fd22498bcc14c8f347246578bd0e3706af2f80fa/subjects/en_subject_libft%20(1).pdf) `PDF`

## NASIL KULLANILIR
#### 1º - Depoyu klonlayın
```bash
git clone git@github.com:jotavare/libft.git
```

#### 2º - Proje klasörüne girin ve `make` komutunu çalıştırın
```bash
cd libft/libft
make
```

#### 3º - Kodunuzda kullanmak için başlığı ekleyin
```c
#include "libft.h"
```

#### MAKEFILE KURALLARI

`make` - Libft **zorunlu** dosyalarını derler.

`make bonus` - Libft **bonus** dosyalarını derler.

`make all` - **Zorunlu** + **bonus** dosyalarını derler.

`make clean` - Tüm .o (nesne dosyaları) dosyalarını siler.

`make fclean` - Tüm .o (nesne dosyaları) ve .a (çalıştırılabilir) dosyalarını siler.

`make re` - `fclean` + `all` kurallarını kullanır.

## ZORUNLU
> Libft'teki zorunlu fonksiyonlar, hem standart C kütüphanesindeki fonksiyonları hem de karakter, string ve bellek manipülasyonu için yararlı diğer fonksiyonları içerir. Bu **34 zorunlu fonksiyon**, **100** tam puan almak için gereklidir.

#### Karakterleri kontrol edin ve manipüle edin:
| Fonksiyon | Açıklama |
| :- | :- |
| `ft_isalpha` | Alfabetik karakter testi. |
| `ft_isdigit` | Ondalık basamak karakter testi. |
| `ft_isalnum` | Alfanümerik karakter testi. |
| `ft_isascii` | ASCII karakter testi. |
| `ft_toupper` | Küçük harfi büyük harfe dönüştürme. |
| `ft_tolower` | Büyük harfi küçük harfe dönüştürme. |

#### String'leri manipüle edin:
| Fonksiyon | Açıklama |
| :- | :- |
| `ft_strlen`   | String'in uzunluğunu bulun. |
| `ft_strlcpy`  | Boyut sınırlı string kopyalama. |
| `ft_strlcat`  | Boyut sınırlı string birleştirme. |
| `ft_strchr`   | String'de karakteri bulun (ilk bulma). |
| `ft_strrchr`  | String'de karakteri bulun (son bulma). |
| `ft_strncmp`  | String'leri karşılaştırın (boyut sınırlı). |
| `ft_strnstr`  | String'de alt string'i bulun (boyut sınırlı). |
| `ft_substr`   | String'den alt string çıkarın. |
| `ft_strjoin`  | İki string'i birleştirip yeni bir string oluşturun (malloc ile). |
| `ft_strtrim`  | Belirtilen karakterlerle string'in başını ve sonunu kırpın. |
| `ft_split`    | Belirtilen karakteri ayırıcı olarak kullanarak string'i bir diziye ayırın. |
| `ft_strmapi`  | Belirtilen bir fonksiyonla string'i değiştirerek yeni bir string oluşturun. |
| `ft_striteri` | String üzerinde gezinip, karakter ve indeks manipülasyonu yapın. |

#### Belleği manipüle edin:
| Fonksiyon | Açıklama |
| :- | :- |
| `ft_calloc`  | Bellek tahsisi yapın. |
| `ft_memset`  | Bir byte'ı byte dizisine yazın. |
| `ft_bzero`   | Byte dizisine sıfır yazın. |
| `ft_memcpy`  | Bellek alanını kopyalayın. |
| `ft_memmove` | Byte dizisini kopyalayın. |
| `ft_memchr`  | Byte dizisinde byte'ı bulun. |
| `ft_memcmp`  | Byte dizisini karşılaştırın. |
| `ft_strdup`  | Bir string'in kopyasını saklayın (malloc ile). |

#### Sayıları manipüle edin:
| Fonksiyon | Açıklama |
| :- | :- |
| `ft_atoi` | ASCII string'i tam sayıya dönüştürün. |
| `ft_itoa` | Tam sayıyı ASCII string'e dönüştürün. |

#### Bir dosya tanıtıcısına yazın:
| Fonksiyon | Açıklama |
| :- | :- |
| `ft_putchar_fd` | Verilen dosyaya bir karakter çıktılayın. |
| `ft_putstr_fd`  | Verilen dosyaya string çıktılayın. |
| `ft_putendl_fd` | Verilen dosyaya string'i yeni satırla çıktılayın. |
| `ft_putnbr_fd`  | Verilen dosyaya tam sayı çıktılayın. |

## BONUS
> Libft'teki bonus fonksiyonlar, liste manipülasyonuna odaklanır ve son notunuza 25 puan daha ekler. **125 tam puan** almak için **9 bonus fonksiyonun ve 34 zorunlu fonksiyonun** tamamı doğru şekilde tamamlanmalıdır.

| Fonksiyon | Açıklama |
| :- | :- |
| `ft_lstnew`       | Yeni bir liste oluşturun. |
| `ft_lstadd_front` | Listenin başına yeni bir eleman ekleyin. |
| `ft_lstadd_back`  | Listenin sonuna yeni bir eleman ekleyin. |
| `ft_lstsize`      | Listedeki elemanları sayın. |
| `ft_lstlast`      | Listenin son elemanını bulun. |
| `ft_lstdelone`    | Listeden bir eleman silin. |
| `ft_lstclear`     | Listeden belirtilen bir başlangıç noktasından itibaren elemanları silin. |
| `ft_lstiter`      | Listenin tüm elemanlarının içeriğine bir fonksiyon uygulayın. |
| `ft_lstmap`       | Listenin tüm elemanlarının içeriğine bir fonksiyon uygulayarak yeni bir liste oluşturun. |

## NORMINETTE
> 42 Okulu'nda, hemen hemen her projenin **Norm**'a göre yazılması beklenir. Bu, okulun belirlediği kodlama standartıdır.


* [42 Normları](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - 42'nin kodlama normları hakkında bilgi. `PDF`
* [Norminette](https://github.com/42School/norminette) - 42 tarafından geliştirilen, kodlama normlarına uymak için kullanılan araç. `GitHub`
* [42 Başlık](https://github.com/42Paris/42header) - Vim için 42 başlığı. `GitHub`

## KATKIDA BULUNMA

Herhangi bir sorun bulursanız veya iyileştirme önerileriniz varsa, depoyu forkladıktan sonra bir sorun açabilir veya bir pull request gönderebilirsiniz.

## LİSANS

Bu proje MIT Lisansı altında sunulmaktadır. Daha fazla bilgi için [LICENSE](LICENSE) dosyasına başvurun.
