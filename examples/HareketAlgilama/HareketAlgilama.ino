/*
 *   Hareket Algılama örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensör hareket algılayınca seri monitöre HAREKET ALGILANDI yazdırmaktadır. 
 *   Not: Kartta ilk güç verildikten sonra üstündeki DURUM LEDİ yanıp sönmeye başlamaktadır. Led söndükten sonra sensör algılamaya başlamaktadır. 
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Hareket Algılama için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-hareket-algilama-arduino-library <------
 *
*/
#include <Deneyap_HareketAlgilama.h>                    // Deneyap_HareketAlgilama kütüphanesi eklenmesi

Gesture Hareket;                                        // Gesture için class tanımlanması

void setup() {
    Serial.begin(115200);                               // Seri monitör başlatılması
    if (!Hareket.begin(0x32)) {                         // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız ");    // I2C bağlantısı başarısız olursa seri monitore yazdırılması
        while (1);
    }
}

void loop() {
    bool gestureDurum = Hareket.readGesture();          // Hareket verisinin okunması
    if (gestureDurum == 1) {
        Serial.println("HAREKET ALGILANDI");            // Hareket ALGILANDI seri monitöre yazdırılması
    }
    else {
        Serial.println("#################");
    }
    delay(100);
}
