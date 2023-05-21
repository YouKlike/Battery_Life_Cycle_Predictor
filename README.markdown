# BatteryLifeCyclePredictor(電池壽命預測器)

### 專題描述
專案旨在開發一個智能裝置管理系統，使用機器學習和深度學習技術來預測和管理裝置中的電池壽命。這個系統可以應用於各種便攜式電子產品，如智能手機、平板電腦、筆記型電腦等，幫助使用者更好地管理和延長電池的使用壽命。

### 電池壽命預測器預期功能:
1. 電池壽命預測：使用機器學習或深度學習模型，基於電池的充放電歷史數據，預測電池的壽命。模型可以根據不同的電池特性和使用情況進行訓練，提供準確的壽命預測結果。
2. 電池健康監控：實時監測電池的狀態和健康度，包括充電狀態、放電速率、溫度等指標。根據這些指標，系統可以提供警報和建議，以幫助使用者合理使用電池，延長電池壽命。
3. 充放電優化：根據電池壽命預測和電池健康狀態，系統可以優化充放電策略，提供最佳的充放電建議。這樣可以減少過度充放電對電池壽命的影響，提高電池的使用效率和壽命。
4. 用戶界面和報告：提供用戶友好的界面，顯示電池的壽命預測、健康狀態和充放電建議。系統還可以生成電池使用報告，幫助使用者了解電池的使用情況和壽命變化。

### 專題材料
- Arduino Nano 33 BLE * 1
- 電壓檢測傳感器 * 1
- 變阻器(Rheostat, Wirewound) * 1
- 9V 鋰電池 * 1

### 開發環境
- Windows 11
- Visual Studio Code
- Arduino IDE (lastest version)
- python 3.9.2
- tinkercad (模擬 Arduino電路)
- Edge Impulse

### 安裝環境

安裝 TinyML
```shell
pip install tinymlgen
```
安裝 tensorflow
```shell
pip install tensorflow
```

### 文件配置

```
│─ __MACOSX ················ Edge Impulse
│
│─ Lithium_ion_Life_cycle_predictor_inferencing ············ Edge Impulse
│
│─ BatteryLifeCyclePredictor.ino ················ 主要訓練程式碼
│  
├─ ollect_data ······················· 查詢電壓
│      read_voltage.ino
│      
└─ README.markdown ·················· 專題介紹
```