# Health Monitoring Device

## 📌 Overview
This project is an IoT + AI system for real-time health monitoring.  
It tracks heart rate, oxygen level (SpO₂), and sends alerts if abnormal patterns are detected.

## 🛠️ Tech Stack
- **Hardware**: ESP32, MAX30100 Pulse Oximeter
- **Backend**: Flask (Python)
- **AI**: Anomaly detection (basic rules)
- **Frontend**: React Dashboard
- **Database**: Firebase

# Wire Connection 

## MAX30102        ESP32 (MCU32)
---------        --------------
1. VIN   --------->  3.3V
2. GND   --------->  GND
3. SCL   --------->  GPIO 22
4. SDA   --------->  GPIO 21
5. INT   --------->  (optional, GPIO 19)

## 🚀 How to Run
1. ESP32 with Arduino IDE.

   
3. Run Arduino IOT cloud Dashboard:
   
4. View real-time vitals + anomaly detection.

## ⚡ Future Scope
- Add ECG monitoring
- Machine Learning models for prediction
- Mobile App integration
