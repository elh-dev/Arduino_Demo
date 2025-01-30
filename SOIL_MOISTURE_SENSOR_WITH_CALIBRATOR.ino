//Soil Moisture Sensor
int sensorPin = A1;

void Calibrate(int dryValue, int wetValue){

  
}
void setup() {
  //initialize serial communication
  Serial.begin(9600);

}

void loop() {
  //read sesneor value
  
  int sensorValue = analogRead(sensorPin);
  //Maps reading to a 0-100% value
  //calibration settings 
  int dryValue = 0;  
  int wetValue = 677;// if bellow 100% reduce this number, if over increase 
  int moistureLevel = map(sensorValue, dryValue, wetValue, 0, 100);

  //writes details
  Serial.print("Moisture Level: ");
  Serial.print(moistureLevel);
  Serial.println("%");
  delay(5000);
  
}
