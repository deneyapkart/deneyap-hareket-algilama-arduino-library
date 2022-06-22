/*
 *   I2C haberleşme protokolü kullanılmadan Hareket Algılaması örneği,
 *
 *   Sensör Hareket algılayınca seri monitöre Hareket ALGILANDI yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Hareket Algılama için oluşturulmuştur
 *      ------> www.....com <------ //docs
 *      ------> https://github.com/deneyapkart/deneyap-hareket-algilama-arduino-library <------
 *
 */
#define OUTPIN D0                                        // Hareket Algılama kartındaki OUT pininin D0 pini baglanmalıdır
int Hareket;

void setup() {
    Serial.begin(115200);                               // Seri monitör başlatılması
    pinMode(OUTPIN, INPUT);                             // OUTPIN pini giriş olarak ayarlanması
}

void loop() {
    Hareket = digitalRead(OUTPIN);                      // Hareket verisinin okunması

    if (Hareket == 1) {
        Serial.println("Hareket ALGILANDI");            // Hareket ALGILANDI seri monitöre yazdırılması
    }
    else {
        Serial.println("#################");
    }
    delay(100);
}
