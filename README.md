# AI-Driven Health Monitoring Device

## 📌 Overview
This project is an IoT + AI system for real-time health monitoring.  
It tracks heart rate, oxygen level (SpO₂), and sends alerts if abnormal patterns are detected.

## 🛠️ Tech Stack
- **Hardware**: ESP32, MAX30100 Pulse Oximeter
- **Backend**: Flask (Python)
- **AI**: Anomaly detection (basic rules)
- **Frontend**: React Dashboard
- **Database**: Firebase

## 🚀 How to Run
1. Flash `esp32_health.ino` to ESP32 with Arduino IDE.
2. Start Flask backend:
   ```bash
   cd server
   python app.py
   ```
3. Run React Dashboard:
   ```bash
   cd dashboard
   npm start
   ```
4. View real-time vitals + anomaly detection.

## ⚡ Future Scope
- Add ECG monitoring
- Machine Learning models for prediction
- Mobile App integration
