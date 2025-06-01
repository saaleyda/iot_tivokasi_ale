#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int ledHijau = 26;
int ledMerah = 33;
int ledKuning = 32;  // Tambahkan LED kuning

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 LED Sequence");

    // Atur pin sebagai OUTPUT
    pinMode(ledHijau, OUTPUT);
    pinMode(ledMerah, OUTPUT);
    pinMode(ledKuning, OUTPUT);
}

void loop() {
    // Nyalakan LED hijau, lalu matikan
    digitalWrite(ledHijau, HIGH);
    Serial.println("LED Hijau ON");
    delay(1000);
    digitalWrite(ledHijau, LOW);

    // Nyalakan LED merah, lalu matikan
    digitalWrite(ledMerah, HIGH);
    Serial.println("LED Merah ON");
    delay(1000);
    digitalWrite(ledMerah, LOW);

    // Nyalakan LED kuning, lalu matikan
    digitalWrite(ledKuning, HIGH);
    Serial.println("LED Kuning ON");
    delay(1000);
    digitalWrite(ledKuning, LOW);

    // Tunggu sebentar sebelum mengulang
    delay(500);
}
