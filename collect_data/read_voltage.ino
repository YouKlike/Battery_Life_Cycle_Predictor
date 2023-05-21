#include <SD.h>  // 引入SD庫

#define ANALOG_IN_PIN A0
#define SD_CS_PIN 10  // SD卡片選擇腳

File dataFile;  // 用於儲存CSV檔案的物件

float adc_voltage = 0.0;
float in_voltage = 0.0;
float cal_temp = 0.33;
float R1 = 30000.0;
float R2 = 7500.0;
float ref_voltage = 5.0;
int adc_value = 0;
int minute = 0;

void setup() {
  Serial.begin(9600);

  // 初始化SD卡
  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("SD卡初始化失敗");
    return;
  }

  // 創建CSV檔案
  dataFile = SD.open("data.csv", FILE_WRITE);
  if (dataFile) {
    dataFile.println("Time, Voltage");
    dataFile.close();
  } else {
    Serial.println("無法創建檔案");
  }
}

void loop() {
  adc_value = analogRead(ANALOG_IN_PIN);
  adc_voltage = (adc_value * ref_voltage) / 1024.0;
  in_voltage = adc_voltage / (R2 / (R1 + R2));

  // 打開CSV檔案以寫入數據
  dataFile = SD.open("data.csv", FILE_WRITE);
  if (dataFile) {
    // 寫入數據到CSV檔案
    dataFile.print(minute);
    dataFile.print(',');
    dataFile.println(in_voltage - cal_temp, 2);
    dataFile.close();
  } else {
    Serial.println("無法打開檔案");
  }

  Serial.print(minute);
  Serial.print(',');
  Serial.println(in_voltage - cal_temp, 2);
  minute++;

  delay(60000);
}