import { useEffect, useState } from "react";

function App() {
  const [bpm, setBpm] = useState(0);
  const [spo2, setSpo2] = useState(0);

  useEffect(() => {
    const interval = setInterval(() => {
      fetch("https://your-firebase.firebaseio.com/patient1.json")
        .then(res => res.json())
        .then(data => {
          setBpm(data.bpm);
          setSpo2(data.spo2);
        });
    }, 2000);
    return () => clearInterval(interval);
  }, []);

  return (
    <div style={{ padding: "20px" }}>
      <h1>Health Monitoring Dashboard</h1>
      <p>💓 Heart Rate: {bpm} bpm</p>
      <p>🫁 SpO₂: {spo2}%</p>
    </div>
  );
}

export default App;