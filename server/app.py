from flask import Flask, request, jsonify
from model import check_anomaly

app = Flask(__name__)

@app.route("/analyze", methods=["POST"])
def analyze():
    data = request.json
    bpm, spo2 = data["bpm"], data["spo2"]
    status = check_anomaly(bpm, spo2)
    return jsonify({"status": status})

if __name__ == "__main__":
    app.run(port=5000, debug=True)
