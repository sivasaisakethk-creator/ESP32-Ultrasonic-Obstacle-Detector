#define TRIG_PIN 5
#define ECHO_PIN 18

const int WARNING_DISTANCE = 50;  // cm
const int DANGER_DISTANCE = 20;   // cm

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Serial.println("ESP32 Ultrasonic Obstacle Detector Started");
  Serial.println("-----------------------------------------");
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Measure echo time
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Alert levels
  if (distance <= DANGER_DISTANCE) {
    Serial.println("🚨 DANGER: OBSTACLE VERY CLOSE!");
  }
  else if (distance <= WARNING_DISTANCE) {
    Serial.println("⚠ WARNING: OBJECT DETECTED");
  }
  else {
    Serial.println("✅ SAFE");
  }

  Serial.println("-----------------------------");

  delay(500);
}
