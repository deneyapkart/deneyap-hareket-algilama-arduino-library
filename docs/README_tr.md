# Deneyap Hareket Algılama NCS36000 Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Hareket Algılama NCS36000 için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M59**, **mpv1.0**
- `MCU` NCS36000, STM8S003F3
- `Ağırlık`
- `Modul Boyutları` 
- `I2C Adres` 0x32, 0x3D, 0x3F, 0X3E

| Adres |  | 
| :---  | :---     |
| 0x32 | varsayılan adres |
| 0x3D | ADR1 lehimlendiğinde adres |
| 0x3E | ADR2 lehimlendiğinde adres |
| 0x3F | ADR1 ve ADR2 lehimlendiğinde adres |

## :closed_book:Dokümanlar
Deneyap Hareket Algılama NCS36000

[NCS36000-datasheet](https://www.onsemi.com/pdf/datasheet/ncs36000-d.pdf)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Hareket Algılama
Bu Arduino kütüphanesi Deneyap Hareket Algılama NCS36000 I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz. 

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Hareket Algılama ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir.

| Hareket Algılama 	| Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
| SWIM 		| Debug | bağlantı yok |
| RES  		| Debug | bağlantı yok |
| OUT 		| Data çıkışı| herhangi bir GPIO pini| 
| AOUT 		| Ham Data çıkışı| herhangi bir GPIO pini| 

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-hareket-algilama-arduino-library/blob/master/LICENSE) dosyasını inceleyin.