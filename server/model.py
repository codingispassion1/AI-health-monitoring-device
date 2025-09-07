import numpy as np

def check_anomaly(bpm, spo2):
    if bpm < 50 or bpm > 120:
        return "Abnormal Heart Rate"
    if spo2 < 90:
        return "Low Oxygen Level"
    return "Normal"
